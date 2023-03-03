// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef VOXS_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define VOXS_Weapon_generated_h

#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_SPARSE_DATA
#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_weaponState); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_weaponState); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxs"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		weaponState=NETFIELD_REP_START, \
		NETFIELD_REP_END=weaponState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxs"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		weaponState=NETFIELD_REP_START, \
		NETFIELD_REP_END=weaponState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_20_PROLOG
#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_SPARSE_DATA \
	FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_RPC_WRAPPERS \
	FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_INCLASS \
	FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_SPARSE_DATA \
	FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_INCLASS_NO_PURE_DECLS \
	FID_Voxs_Source_Voxs_Weapon_Weapon_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXS_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Voxs_Source_Voxs_Weapon_Weapon_h


#define FOREACH_ENUM_EWEAPONSTATE(op) \
	op(EweaponState::EWS_initialState) \
	op(EweaponState::EWS_Equppied) \
	op(EweaponState::EWS_Dropped) \
	op(EweaponState::EWS_Max) 

enum class EweaponState : uint8;
template<> VOXS_API UEnum* StaticEnum<EweaponState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
