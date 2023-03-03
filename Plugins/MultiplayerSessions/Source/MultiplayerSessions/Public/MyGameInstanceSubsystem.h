// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include"Interfaces/OnlineSessionInterface.h"
#include "MyGameInstanceSubsystem.generated.h"

//
//
//Declaring our own custom delegatesfor the menu class to bind it's callbacks to
//
//

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnCreateSessionComplete, bool, bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_TwoParams(FMultiplayerOnFindSessionsComplete, const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_OneParam(FMultiplayerOnJoinSessionComplete, EOnJoinSessionCompleteResult::Type Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnDestroySessionComplete, bool, bWasSuccesful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnStartSessionComplete, bool, bWasSuccesful);

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMyGameInstanceSubsystem();

	//
	// To handle session functionality. The 'Menu Class will call these.
	// 

	void CreateSession(int32 numPublicConnect, FString MatchType);
	void findSessions(int32 maxSearchResults);
	void JoinSession(const FOnlineSessionSearchResult& SessionResult);
	void DestroySession();
	void StartSession();
	//
	//Our own custon delegates for the menu class to bind callbacks to 
	//
	FMultiplayerOnCreateSessionComplete MultiplayerOnCreateSessionComplete;
	FMultiplayerOnFindSessionsComplete MultiplayerOnFindSessionComplete;
	FMultiplayerOnJoinSessionComplete MultiplayerOnJoinSessionComplete;
	FMultiplayerOnDestroySessionComplete MultiplayerOnDestroySessionComplete;
	FMultiplayerOnStartSessionComplete MultiplayerOnStartSessionComplete;


protected:

	//
	//Internal callbacks for the delegates we'll add to the Online Sesh Interface Delegate List
	//These don't need to be called outside this class
	//

	void OnCreateSeshComplete(FName SeshName, bool bWasSuccessful);
	void OnFindSessionComplete(bool bWasSuccessful);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void OnDestroySessionComplete(FName SeshName, bool bWasSuccessful);
	void OnStartSessionComplete(FName SeshName, bool bWasSuccessful);


private:

	IOnlineSessionPtr SessionInterface;

	TSharedPtr<FOnlineSessionSettings> LastSessionSettings;
	TSharedPtr<FOnlineSessionSearch> LastSessionSearch;

	//
	//TO add to online sesh interface delegate list
	//Bind our multi sesh susbystems internal callbacks to these
	//

	FOnCreateSessionCompleteDelegate CreateSeshCompleteDelegate;
	FDelegateHandle CreateSeshCompleteDelegateHandle;
	FOnFindSessionsCompleteDelegate FindSeshCompleteDelegate;
	FDelegateHandle FindSeshCompleteDelegateHandle;
	FOnJoinSessionCompleteDelegate JoinSeshCompleteDelegate;
	FDelegateHandle JoinSeshCompleteDelegateHandle;
	FOnDestroySessionCompleteDelegate DestroySeshCompleteDelegate;
	FDelegateHandle DestroySeshCompleteDelegateHandle;
	FOnStartSessionCompleteDelegate StartSesHCompleteDelegate;
	FDelegateHandle StartSesHCompleteDelegateHandle;
	
	bool bCreateSeshOnDestroy{ false };
	int32 LastNumPublicConnections;
	FString LastMatchType;
};
