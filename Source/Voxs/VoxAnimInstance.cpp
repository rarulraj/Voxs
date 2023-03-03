// Fill out your copyright notice in the Description page of Project Settings.


#include "VoxAnimInstance.h"
#include "Character/VoxCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"


void UVoxAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	VoxCharacter = Cast<AVoxCharacter>(TryGetPawnOwner());
}



void UVoxAnimInstance::NativeUpdateAnimation(float deltaTime)
{
	Super::NativeUpdateAnimation(deltaTime);

	if (VoxCharacter == nullptr)
	{
		VoxCharacter = Cast<AVoxCharacter>(TryGetPawnOwner());
	}

	if (VoxCharacter == nullptr)
	{
		return;
	}

	FVector Velocity = VoxCharacter->GetVelocity();
	Velocity.Z = 0.f;
	speed = Velocity.Size();

	bIsInAir = VoxCharacter->GetCharacterMovement()->IsFalling();

	bisAccelerating = VoxCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f ? true : false;

	
	bweaponEquipped = VoxCharacter->isWeaponEquipped();
	bisCrouched = VoxCharacter->bIsCrouched;
	bisAiming = VoxCharacter->isAiming();

	//Offset Yaw for Strafing
	FRotator aimRotation = VoxCharacter->GetBaseAimRotation();
	FRotator movementRotation = UKismetMathLibrary::MakeRotFromX(VoxCharacter->GetVelocity());
	FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(movementRotation, aimRotation);
	deltaRotation = FMath::RInterpTo(deltaRotation, DeltaRot, deltaTime, 15.f);
	YawOffset = deltaRotation.Yaw;

	characterRotationLastFrame = VoxCharacter->GetActorRotation();
	const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(characterRotation,characterRotationLastFrame);
	const float Target = Delta.Yaw/deltaTime;
	const float interp = FMath::FInterpTo(Lean, Target, deltaTime,6.f);
	Lean = FMath::Clamp(interp, -90.f, 90.f);
	 
	AO_YAW = VoxCharacter->GetAO_Yaw();
	AO_PITCH = VoxCharacter->GetAO_Pitch();
}


