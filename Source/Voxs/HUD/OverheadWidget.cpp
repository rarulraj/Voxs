// Fill out your copyright notice in the Description page of Project Settings.


#include "OverheadWidget.h"
#include "Components/TextBlock.h"

void UOverheadWidget::setDisplayText(FString display)
{
	if (displayText)
	{
		displayText->SetText(FText::FromString(display));
	}
}

void UOverheadWidget::showPlayerNetRole(APawn* inPawn)
{
	ENetRole RemoteRole = inPawn->GetRemoteRole();
	FString Role;

	switch (RemoteRole)
	{
	case ENetRole::ROLE_Authority:
			Role = FString("Authority");
			break;
	case ENetRole::ROLE_AutonomousProxy:
		Role = FString("Autonomous Proxy");
		break;
	case ENetRole::ROLE_None:
		Role = FString("None");
		break;
	case ENetRole::ROLE_SimulatedProxy:
		Role = FString("SimulatedProxy");
		break;
	}

	FString RemoteRoleString = FString::Printf(TEXT("Remote Role %s"), *Role);
	setDisplayText(RemoteRoleString);
}

void UOverheadWidget::OnLevelRemovedFromWorld(ULevel* inLevel, UWorld* inWorld)
{
	
	RemoveFromParent();
	Super::OnLevelRemovedFromWorld(inLevel, inWorld);
}
