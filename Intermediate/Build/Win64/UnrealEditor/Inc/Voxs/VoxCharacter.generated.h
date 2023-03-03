// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon;
#ifdef VOXS_VoxCharacter_generated_h
#error "VoxCharacter.generated.h already included, missing '#pragma once' in VoxCharacter.h"
#endif
#define VOXS_VoxCharacter_generated_h

#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_SPARSE_DATA
#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_RPC_WRAPPERS \
	virtual void ServerEquipButtonPressed_Implementation(); \
 \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon);


#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerEquipButtonPressed_Implementation(); \
 \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon);


#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_EVENT_PARMS
#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_CALLBACK_WRAPPERS
#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxCharacter(); \
	friend struct Z_Construct_UClass_AVoxCharacter_Statics; \
public: \
	DECLARE_CLASS(AVoxCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxs"), NO_API) \
	DECLARE_SERIALIZER(AVoxCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappingWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAVoxCharacter(); \
	friend struct Z_Construct_UClass_AVoxCharacter_Statics; \
public: \
	DECLARE_CLASS(AVoxCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxs"), NO_API) \
	DECLARE_SERIALIZER(AVoxCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlappingWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=OverlappingWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxCharacter(AVoxCharacter&&); \
	NO_API AVoxCharacter(const AVoxCharacter&); \
public:


#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxCharacter(AVoxCharacter&&); \
	NO_API AVoxCharacter(const AVoxCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxCharacter)


#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_10_PROLOG \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_EVENT_PARMS


#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_SPARSE_DATA \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_RPC_WRAPPERS \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_CALLBACK_WRAPPERS \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_INCLASS \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_SPARSE_DATA \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_CALLBACK_WRAPPERS \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Voxs_Source_Voxs_Character_VoxCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXS_API UClass* StaticClass<class AVoxCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Voxs_Source_Voxs_Character_VoxCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
