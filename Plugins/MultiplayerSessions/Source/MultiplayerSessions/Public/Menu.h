// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Menu.generated.h"



/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		void MenuSetup(int32 NumofPubConnects = 4, FString TypeOfMatch = FString(TEXT("Free For All")), FString LobbyPath = FString(TEXT("/Game/ThirdPerson/Maps/Lobby")));

protected:

	virtual bool Initialize() override;
	virtual void NativeDestruct() override;
	//
	//
	//Callbacksfor the custom delegates on the multiplayersubsystems
	//

	UFUNCTION()
	void onCreateSession(bool bWasSuccessful);
	void onFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful);
	void onJoinSession(EOnJoinSessionCompleteResult::Type Result);
	UFUNCTION()
	void onDestroySession(bool bWasSuccesful);
	UFUNCTION()
	void onStartSession(bool bwasSuccesful);
private:

	UPROPERTY(meta = (BindWidget))
		class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;


	UFUNCTION()
	void hostButtonClicked();

	UFUNCTION()
	void joinButtonClicked();

	UFUNCTION()
	void MenuTearDown();


	//subsystem desgined to handle all online sesh functionality
	class UMyGameInstanceSubsystem* MultiplayerSessionsSubsystem;

	int32 NumPublicConnections{4};
	FString MatchType{ TEXT("Free For All") };
	FString PathToLobby{TEXT("")};
};
