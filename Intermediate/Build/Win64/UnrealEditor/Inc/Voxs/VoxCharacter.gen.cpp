// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxs/Character/VoxCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxCharacter() {}
// Cross Module References
	VOXS_API UClass* Z_Construct_UClass_AVoxCharacter_NoRegister();
	VOXS_API UClass* Z_Construct_UClass_AVoxCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Voxs();
	VOXS_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	VOXS_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVoxCharacter::execServerEquipButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEquipButtonPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxCharacter::execOnRep_OverlappingWeapon)
	{
		P_GET_OBJECT(AWeapon,Z_Param_LastWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverlappingWeapon(Z_Param_LastWeapon);
		P_NATIVE_END;
	}
	static FName NAME_AVoxCharacter_ServerEquipButtonPressed = FName(TEXT("ServerEquipButtonPressed"));
	void AVoxCharacter::ServerEquipButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVoxCharacter_ServerEquipButtonPressed),NULL);
	}
	void AVoxCharacter::StaticRegisterNativesAVoxCharacter()
	{
		UClass* Class = AVoxCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_OverlappingWeapon", &AVoxCharacter::execOnRep_OverlappingWeapon },
			{ "ServerEquipButtonPressed", &AVoxCharacter::execServerEquipButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics
	{
		struct VoxCharacter_eventOnRep_OverlappingWeapon_Parms
		{
			AWeapon* LastWeapon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon = { "LastWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxCharacter_eventOnRep_OverlappingWeapon_Parms, LastWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::NewProp_LastWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/VoxCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxCharacter, nullptr, "OnRep_OverlappingWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::VoxCharacter_eventOnRep_OverlappingWeapon_Parms), Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxCharacter_ServerEquipButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/VoxCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxCharacter_ServerEquipButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxCharacter, nullptr, "ServerEquipButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxCharacter_ServerEquipButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxCharacter_ServerEquipButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxCharacter_ServerEquipButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxCharacter);
	UClass* Z_Construct_UClass_AVoxCharacter_NoRegister()
	{
		return AVoxCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVoxCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerHeadWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerHeadWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Combat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Combat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxs,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxCharacter_OnRep_OverlappingWeapon, "OnRep_OverlappingWeapon" }, // 1112717874
		{ &Z_Construct_UFunction_AVoxCharacter_ServerEquipButtonPressed, "ServerEquipButtonPressed" }, // 2841002619
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/VoxCharacter.h" },
		{ "ModuleRelativePath", "Character/VoxCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxCharacter_Statics::NewProp_CameraB_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/VoxCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxCharacter_Statics::NewProp_CameraB = { "CameraB", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxCharacter, CameraB), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_CameraB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_CameraB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/VoxCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxCharacter_Statics::NewProp_playerHeadWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VoxCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/VoxCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxCharacter_Statics::NewProp_playerHeadWidget = { "playerHeadWidget", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxCharacter, playerHeadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_playerHeadWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_playerHeadWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxCharacter_Statics::NewProp_OverlappingWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Character/VoxCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxCharacter_Statics::NewProp_OverlappingWeapon = { "OverlappingWeapon", "OnRep_OverlappingWeapon", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxCharacter, OverlappingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_OverlappingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_OverlappingWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxCharacter_Statics::NewProp_Combat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VoxCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/VoxCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxCharacter_Statics::NewProp_Combat = { "Combat", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxCharacter, Combat), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_Combat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxCharacter_Statics::NewProp_Combat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxCharacter_Statics::NewProp_CameraB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxCharacter_Statics::NewProp_playerHeadWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxCharacter_Statics::NewProp_OverlappingWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxCharacter_Statics::NewProp_Combat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxCharacter_Statics::ClassParams = {
		&AVoxCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVoxCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxCharacter()
	{
		if (!Z_Registration_Info_UClass_AVoxCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxCharacter.OuterSingleton, Z_Construct_UClass_AVoxCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxCharacter.OuterSingleton;
	}
	template<> VOXS_API UClass* StaticClass<AVoxCharacter>()
	{
		return AVoxCharacter::StaticClass();
	}

	void AVoxCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OverlappingWeapon(TEXT("OverlappingWeapon"));

		const bool bIsValid = true
			&& Name_OverlappingWeapon == ClassReps[(int32)ENetFields_Private::OverlappingWeapon].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AVoxCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxCharacter);
	struct Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_Character_VoxCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_Character_VoxCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxCharacter, AVoxCharacter::StaticClass, TEXT("AVoxCharacter"), &Z_Registration_Info_UClass_AVoxCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxCharacter), 3445414898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_Character_VoxCharacter_h_1430662010(TEXT("/Script/Voxs"),
		Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_Character_VoxCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_Character_VoxCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
