// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXS_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define VOXS_CombatComponent_generated_h

#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_SPARSE_DATA
#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_RPC_WRAPPERS \
	virtual void ServerSetAiming_Implementation(bool binAiming); \
 \
	DECLARE_FUNCTION(execonRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerSetAiming);


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetAiming_Implementation(bool binAiming); \
 \
	DECLARE_FUNCTION(execonRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerSetAiming);


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_EVENT_PARMS \
	struct CombatComponent_eventServerSetAiming_Parms \
	{ \
		bool binAiming; \
	};


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_CALLBACK_WRAPPERS
#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxs"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		bisAiming, \
		NETFIELD_REP_END=bisAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxs"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		bisAiming, \
		NETFIELD_REP_END=bisAiming	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public:


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent)


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_9_PROLOG \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_EVENT_PARMS


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_SPARSE_DATA \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_RPC_WRAPPERS \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_CALLBACK_WRAPPERS \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_INCLASS \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_SPARSE_DATA \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_CALLBACK_WRAPPERS \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXS_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Voxs_Source_Voxs_VoxComponents_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
