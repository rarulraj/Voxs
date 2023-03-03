// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOXS_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UCombatComponent();
	friend class AVoxCharacter;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray <FLifetimeProperty>& OutLifetimeProps) const override;
	

	void equipWeapon(class AWeapon*WeaponToEquip);
protected:

	virtual void BeginPlay() override; 

	void setAiming(bool binAiming);
	
	UFUNCTION(Server,Reliable)
	void ServerSetAiming(bool binAiming);

	

	UFUNCTION()
	void onRep_EquippedWeapon();

private:

	class AVoxCharacter* Character;

	UPROPERTY(ReplicatedUsing = onRep_EquippedWeapon)
	class AWeapon* EquippedWeapon;

	UPROPERTY(Replicated)
	bool bisAiming;

	UPROPERTY(EditAnywhere)
	float baseWalkSpeed;
	UPROPERTY(EditAnywhere)
	float aimWalkSpeed;
public:	

	

		
};
