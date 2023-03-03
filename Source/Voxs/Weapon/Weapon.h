// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"


UENUM(BlueprintType)
enum class EweaponState :uint8
{
	EWS_initialState UMETA(DisplayName = "Initial State"),
	EWS_Equppied UMETA(DisplayName = "Equipped"),
	EWS_Dropped UMETA(DisplayName = "Dropped"),
	EWS_Max UMETA(DisplayName = "Default Max"),

};

UCLASS()
class VOXS_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	virtual void Tick(float DeltaTime) override;

public:
	void showPickupWidget(bool bShowWidget);
	virtual void GetLifetimeReplicatedProps(TArray <FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	virtual void BeginPlay() override;


	UFUNCTION()
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:

	UPROPERTY(VisibleAnywhere,Category="Weapon Properties")
	USkeletalMeshComponent* weaponMesh;

	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	class USphereComponent* areaSphere;

	UPROPERTY(ReplicatedUsing = OnRep_weaponState,VisibleAnywhere, Category = "Weapon Properties")
	EweaponState weaponState;

	UFUNCTION( )
	void OnRep_weaponState();

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	class UWidgetComponent* pickupWidget;
public:	
	void setWeaponState(EweaponState state);
	FORCEINLINE USphereComponent* GetAreaSphere() const { return areaSphere; }
	
};
