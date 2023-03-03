// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatComponent.h"
#include"Voxs/Weapon/Weapon.h"
#include"Voxs/Character/VoxCharacter.h"
#include"Engine/SkeletalMeshSocket.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SphereComponent.h"
#include <Voxs/VoxAnimInstance.h>

UCombatComponent::UCombatComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

	baseWalkSpeed = 600.f;
	aimWalkSpeed = 450.f;
}



void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	if (Character)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = baseWalkSpeed;
	}
	
}

void UCombatComponent::setAiming(bool binAiming)
{
	bisAiming = binAiming;
	ServerSetAiming(bisAiming);
	if (Character)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = bisAiming ? aimWalkSpeed : baseWalkSpeed;
	}
	
}

void UCombatComponent::ServerSetAiming_Implementation(bool binAiming)
{
	bisAiming = binAiming;
	if (Character)
	{
		Character->GetCharacterMovement()->MaxWalkSpeed = bisAiming ? aimWalkSpeed : baseWalkSpeed;
	}
}


void UCombatComponent::onRep_EquippedWeapon()
{
	if (EquippedWeapon&&Character)
	{
		Character->GetCharacterMovement()->bOrientRotationToMovement = false;
		Character->bUseControllerRotationYaw = true;
	}
}



void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UCombatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCombatComponent, EquippedWeapon);
	DOREPLIFETIME(UCombatComponent, bisAiming);
}

void UCombatComponent::equipWeapon(AWeapon* WeaponToEquip)
{
	if (Character == nullptr || WeaponToEquip == nullptr)
	{
		return;
	}

	EquippedWeapon = WeaponToEquip;
	EquippedWeapon->setWeaponState(EweaponState::EWS_Equppied);
	const USkeletalMeshSocket* HandSocket = Character->GetMesh()->GetSocketByName(FName("RightHandSocket"));
	if (HandSocket)
	{
		HandSocket->AttachActor(EquippedWeapon,Character->GetMesh());
	}

	EquippedWeapon->SetOwner(Character);
	Character->GetCharacterMovement()->bOrientRotationToMovement = false;
	Character->bUseControllerRotationYaw = true;
	
}

