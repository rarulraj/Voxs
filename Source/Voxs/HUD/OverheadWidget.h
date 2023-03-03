// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadWidget.generated.h"

/**
 * 
 */
UCLASS()
class VOXS_API UOverheadWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta =(BindWidget))
	class UTextBlock* displayText;

	void setDisplayText(FString display);

	UFUNCTION(BlueprintCallable)
	void showPlayerNetRole(APawn* inPawn);
	
protected:
	virtual void OnLevelRemovedFromWorld(ULevel*inLevel,UWorld*inWorld) override;
};
