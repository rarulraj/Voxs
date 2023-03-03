// Fill out your copyright notice in the Description page of Project Settings.


#include "VoxCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/WidgetComponent.h"
#include "Components/ActorComponent.h"
#include"Voxs/Weapon/Weapon.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include"Voxs/VoxComponents/CombatComponent.h"

// Sets default values
AVoxCharacter::AVoxCharacter()
{
 
	PrimaryActorTick.bCanEverTick = true;

	CameraB = CreateDefaultSubobject<USpringArmComponent>(TEXT("CAMERAB"));
	CameraB->SetupAttachment(GetMesh());
	CameraB->TargetArmLength = 600;
	CameraB->bUsePawnControlRotation = true;
	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FOLLOWCAMERA"));
	FollowCamera->SetupAttachment(CameraB, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;


	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	playerHeadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverHeadWidget"));
	playerHeadWidget->SetupAttachment(RootComponent);

	Combat = CreateDefaultSubobject<UCombatComponent>(TEXT("Weapon Component"));
	Combat->SetIsReplicated(true);


	GetCharacterMovement()->NavAgentProps.bCanCrouch=true;
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
}

void AVoxCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AVoxCharacter, OverlappingWeapon,COND_OwnerOnly);
	
	
}

void AVoxCharacter::PostInitializeComponents()
{

		Super::PostInitializeComponents();
			if(Combat)
			{
				Combat->Character= this;
			}

}

void AVoxCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void AVoxCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	aimOffset(DeltaTime);

}

void AVoxCharacter::moveForward(float val)
{
	if (Controller != nullptr && val != 0)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddMovementInput(Direction, val);
	}

}

void AVoxCharacter::moveRight(float val)
{

	if (Controller != nullptr && val != 0)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddMovementInput(Direction, val);
	}

}

void AVoxCharacter::Turn(float val)
{
	AddControllerYawInput(val);


}

void AVoxCharacter::lookUp(float val)
{
	AddControllerPitchInput(val);

}

void AVoxCharacter::equipButtonPressed()
{
	if (Combat)
	{
		if (HasAuthority())
		{
			Combat->equipWeapon(OverlappingWeapon);
		}
		else
		{
			ServerEquipButtonPressed();
		}

	}
}

void AVoxCharacter::crouchButtonPressed()
{
	if (bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Crouch();
	}
}

void AVoxCharacter::aimButtonPressed()
{
	if (Combat)
	{
		Combat->setAiming(true);
	}
}

void AVoxCharacter::aimOffset(float DeltaTime)
{
	if (Combat && Combat->EquippedWeapon == nullptr)
	{
		return;
	}

	FVector Velocity = GetVelocity();
	Velocity.Z = 0.f;
	float speed = Velocity.Size();
	bool bisInAir = GetCharacterMovement()->IsFalling();
	
	if (speed == 0.f && !bisInAir)//standing still n not jumping
	{
		FRotator CurrentAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		FRotator DeltaAimRotation = UKismetMathLibrary::NormalizedDeltaRotator(CurrentAimRotation,StartingAimRotation);
		AO_Yaw = DeltaAimRotation.Yaw;
		bUseControllerRotationYaw = false;
	}

	if (speed > 0.f && bisInAir)//running or jumping
	{
		StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		AO_Yaw = 0.f;
		bUseControllerRotationYaw = false;
	}

	AO_Pitch = GetBaseAimRotation().Pitch;
}

void AVoxCharacter::aimButtonReleased()
{
	if (Combat)
	{
		Combat->setAiming(false);
	}
}

void AVoxCharacter::ServerEquipButtonPressed_Implementation()
{
	if (Combat)
	{
		Combat->equipWeapon(OverlappingWeapon);
	}
}

void  AVoxCharacter::SetOverlappingWeapon(AWeapon* Weapon)
{

	if (OverlappingWeapon)
	{
		OverlappingWeapon->showPickupWidget(false);
	}

	OverlappingWeapon = Weapon;
	if (IsLocallyControlled())
	{

		if (OverlappingWeapon)
		{
			OverlappingWeapon->showPickupWidget(true);
		}

	}
}


void AVoxCharacter::OnRep_OverlappingWeapon(AWeapon*LastWeapon)
{
	if (OverlappingWeapon)
	{
		OverlappingWeapon->showPickupWidget(true);
	}

	if (LastWeapon)
	{
		LastWeapon->showPickupWidget(false);
	}
}


void AVoxCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AVoxCharacter::Jump);
	PlayerInputComponent->BindAction("Equip", IE_Pressed, this, &AVoxCharacter::equipButtonPressed);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AVoxCharacter::crouchButtonPressed);
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &AVoxCharacter::aimButtonPressed);
	PlayerInputComponent->BindAction("Aim", IE_Released, this, &AVoxCharacter::aimButtonReleased);

	PlayerInputComponent->BindAxis("MoveForward", this, &AVoxCharacter::moveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AVoxCharacter::moveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AVoxCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AVoxCharacter::lookUp);


}

bool AVoxCharacter::isWeaponEquipped()
{
	return (Combat&&Combat->EquippedWeapon);
}

bool AVoxCharacter::isAiming()
{
	return(Combat&& Combat->bisAiming);
}
