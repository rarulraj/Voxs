// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxs/VoxAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxAnimInstance() {}
// Cross Module References
	VOXS_API UClass* Z_Construct_UClass_UVoxAnimInstance_NoRegister();
	VOXS_API UClass* Z_Construct_UClass_UVoxAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Voxs();
	VOXS_API UClass* Z_Construct_UClass_AVoxCharacter_NoRegister();
// End Cross Module References
	void UVoxAnimInstance::StaticRegisterNativesUVoxAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxAnimInstance);
	UClass* Z_Construct_UClass_UVoxAnimInstance_NoRegister()
	{
		return UVoxAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVoxAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bisAccelerating_MetaData[];
#endif
		static void NewProp_bisAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bisAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bweaponEquipped_MetaData[];
#endif
		static void NewProp_bweaponEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bweaponEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bisCrouched_MetaData[];
#endif
		static void NewProp_bisCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bisCrouched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bisAiming_MetaData[];
#endif
		static void NewProp_bisAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bisAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AO_YAW_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_YAW;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AO_PITCH_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AO_PITCH;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VoxAnimInstance.h" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_VoxCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Character" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_VoxCharacter = { "VoxCharacter", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAnimInstance, VoxCharacter), Z_Construct_UClass_AVoxCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_VoxCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_VoxCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAnimInstance, speed), METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UVoxAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxAnimInstance), &Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAccelerating_SetBit(void* Obj)
	{
		((UVoxAnimInstance*)Obj)->bisAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAccelerating = { "bisAccelerating", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxAnimInstance), &Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bweaponEquipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bweaponEquipped_SetBit(void* Obj)
	{
		((UVoxAnimInstance*)Obj)->bweaponEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bweaponEquipped = { "bweaponEquipped", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxAnimInstance), &Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bweaponEquipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bweaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bweaponEquipped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisCrouched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisCrouched_SetBit(void* Obj)
	{
		((UVoxAnimInstance*)Obj)->bisCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisCrouched = { "bisCrouched", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxAnimInstance), &Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisCrouched_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAiming_SetBit(void* Obj)
	{
		((UVoxAnimInstance*)Obj)->bisAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAiming = { "bisAiming", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxAnimInstance), &Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_YawOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAnimInstance, YawOffset), METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_YawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_YawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_Lean_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAnimInstance, Lean), METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_Lean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_Lean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_YAW_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_YAW = { "AO_YAW", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAnimInstance, AO_YAW), METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_YAW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_YAW_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_PITCH_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "VoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_PITCH = { "AO_PITCH", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxAnimInstance, AO_PITCH), METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_PITCH_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_PITCH_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_VoxCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bIsInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bweaponEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisCrouched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_bisAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_YawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_Lean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_YAW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxAnimInstance_Statics::NewProp_AO_PITCH,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxAnimInstance_Statics::ClassParams = {
		&UVoxAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UVoxAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxAnimInstance.OuterSingleton, Z_Construct_UClass_UVoxAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxAnimInstance.OuterSingleton;
	}
	template<> VOXS_API UClass* StaticClass<UVoxAnimInstance>()
	{
		return UVoxAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxAnimInstance);
	struct Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxAnimInstance, UVoxAnimInstance::StaticClass, TEXT("UVoxAnimInstance"), &Z_Registration_Info_UClass_UVoxAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxAnimInstance), 996633458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxAnimInstance_h_2580314964(TEXT("/Script/Voxs"),
		Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
