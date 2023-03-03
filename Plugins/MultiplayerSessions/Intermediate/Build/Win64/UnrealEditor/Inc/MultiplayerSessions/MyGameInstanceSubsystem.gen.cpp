// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSessions/Public/MyGameInstanceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstanceSubsystem() {}
// Cross Module References
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MultiplayerSessions();
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature();
	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature();
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMyGameInstanceSubsystem_NoRegister();
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMyGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics
	{
		struct _Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n//\n//Declaring our own custom delegatesfor the menu class to bind it's callbacks to\n//\n//\n" },
		{ "ModuleRelativePath", "Public/MyGameInstanceSubsystem.h" },
		{ "ToolTip", "Declaring our own custom delegatesfor the menu class to bind it's callbacks to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerOnCreateSessionComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics
	{
		struct _Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms
		{
			bool bWasSuccesful;
		};
		static void NewProp_bWasSuccesful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccesful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccesful_SetBit(void* Obj)
	{
		((_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms*)Obj)->bWasSuccesful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccesful = { "bWasSuccesful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccesful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccesful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerOnDestroySessionComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics
	{
		struct _Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms
		{
			bool bWasSuccesful;
		};
		static void NewProp_bWasSuccesful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccesful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccesful_SetBit(void* Obj)
	{
		((_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms*)Obj)->bWasSuccesful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccesful = { "bWasSuccesful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccesful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccesful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyGameInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerOnStartSessionComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMyGameInstanceSubsystem::StaticRegisterNativesUMyGameInstanceSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstanceSubsystem);
	UClass* Z_Construct_UClass_UMyGameInstanceSubsystem_NoRegister()
	{
		return UMyGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSessions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/MyGameInstanceSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::ClassParams = {
		&UMyGameInstanceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton;
	}
	template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<UMyGameInstanceSubsystem>()
	{
		return UMyGameInstanceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstanceSubsystem);
	struct Z_CompiledInDeferFile_FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstanceSubsystem, UMyGameInstanceSubsystem::StaticClass, TEXT("UMyGameInstanceSubsystem"), &Z_Registration_Info_UClass_UMyGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstanceSubsystem), 739172724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_171096984(TEXT("/Script/MultiplayerSessions"),
		Z_CompiledInDeferFile_FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxs_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MyGameInstanceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
