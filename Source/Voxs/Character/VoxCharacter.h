// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"
#include "VoxCharacter.generated.h"

UCLASS()
class VOXS_API AVoxCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AVoxCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void GetLifetimeReplicatedProps(TArray <FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostInitializeComponents() override;

protected:
	virtual void BeginPlay() override;

	void moveForward(float val);
	void moveRight(float val);
	void Turn(float val);
	void lookUp(float val);

	void equipButtonPressed();
	void crouchButtonPressed();
	void aimButtonPressed();
	void aimOffset(float DeltaTime);
	void aimButtonReleased();


private:
	UPROPERTY(VisibleAnywhere, Category = Camera)
		class USpringArmComponent* CameraB;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* playerHeadWidget;

	
	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	class AWeapon* OverlappingWeapon;

	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeapon*LastWeapon);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCombatComponent*Combat;

	UFUNCTION(Server,Reliable)
	void ServerEquipButtonPressed();

	float AO_Yaw;
	float AO_Pitch;
	FRotator StartingAimRotation;


public:
	void SetOverlappingWeapon(AWeapon* Weapon);

	bool isWeaponEquipped();

	bool isAiming();

	FORCEINLINE float GetAO_Yaw() const {
		return AO_Yaw;
	}
	
	FORCEINLINE float GetAO_Pitch() const {
		return AO_Pitch;
	}
	
};