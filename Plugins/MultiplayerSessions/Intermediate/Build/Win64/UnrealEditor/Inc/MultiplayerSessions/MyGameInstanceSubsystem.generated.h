// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSIONS_MyGameInstanceSubsystem_generated_h
#error "MyGameInstanceSubsystem.generated.h already included, missing '#pragma once' in MyGameInstanceSubsystem.h"
#endif
#define MULTIPLAYERSESSIONS_MyGameInstanceSubsystem_generated_h

#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_16_DELEGATE \
struct _Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful) \
{ \
	_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_19_DELEGATE \
struct _Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms \
{ \
	bool bWasSuccesful; \
}; \
static inline void FMultiplayerOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnDestroySessionComplete, bool bWasSuccesful) \
{ \
	_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms Parms; \
	Parms.bWasSuccesful=bWasSuccesful ? true : false; \
	MultiplayerOnDestroySessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_20_DELEGATE \
struct _Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms \
{ \
	bool bWasSuccesful; \
}; \
static inline void FMultiplayerOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnStartSessionComplete, bool bWasSuccesful) \
{ \
	_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms Parms; \
	Parms.bWasSuccesful=bWasSuccesful ? true : false; \
	MultiplayerOnStartSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_SPARSE_DATA
#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_RPC_WRAPPERS
#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UMyGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstanceSubsystem)


#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UMyGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstanceSubsystem)


#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstanceSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstanceSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstanceSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstanceSubsystem(UMyGameInstanceSubsystem&&); \
	NO_API UMyGameInstanceSubsystem(const UMyGameInstanceSubsystem&); \
public:


#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstanceSubsystem(UMyGameInstanceSubsystem&&); \
	NO_API UMyGameInstanceSubsystem(const UMyGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstanceSubsystem)


#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_25_PROLOG
#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_SPARSE_DATA \
	FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_RPC_WRAPPERS \
	FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_INCLASS \
	FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_SPARSE_DATA \
	FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<class UMyGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
