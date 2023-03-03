// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxs/HUD/OverheadWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverheadWidget() {}
// Cross Module References
	VOXS_API UClass* Z_Construct_UClass_UOverheadWidget_NoRegister();
	VOXS_API UClass* Z_Construct_UClass_UOverheadWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Voxs();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOverheadWidget::execshowPlayerNetRole)
	{
		P_GET_OBJECT(APawn,Z_Param_inPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->showPlayerNetRole(Z_Param_inPawn);
		P_NATIVE_END;
	}
	void UOverheadWidget::StaticRegisterNativesUOverheadWidget()
	{
		UClass* Class = UOverheadWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "showPlayerNetRole", &UOverheadWidget::execshowPlayerNetRole },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics
	{
		struct OverheadWidget_eventshowPlayerNetRole_Parms
		{
			APawn* inPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::NewProp_inPawn = { "inPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverheadWidget_eventshowPlayerNetRole_Parms, inPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::NewProp_inPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD/OverheadWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverheadWidget, nullptr, "showPlayerNetRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::OverheadWidget_eventshowPlayerNetRole_Parms), Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverheadWidget);
	UClass* Z_Construct_UClass_UOverheadWidget_NoRegister()
	{
		return UOverheadWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOverheadWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_displayText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_displayText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverheadWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxs,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOverheadWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverheadWidget_showPlayerNetRole, "showPlayerNetRole" }, // 3797168414
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverheadWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/OverheadWidget.h" },
		{ "ModuleRelativePath", "HUD/OverheadWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverheadWidget_Statics::NewProp_displayText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/OverheadWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOverheadWidget_Statics::NewProp_displayText = { "displayText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOverheadWidget, displayText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOverheadWidget_Statics::NewProp_displayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::NewProp_displayText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverheadWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverheadWidget_Statics::NewProp_displayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverheadWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverheadWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverheadWidget_Statics::ClassParams = {
		&UOverheadWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOverheadWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOverheadWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOverheadWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverheadWidget()
	{
		if (!Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton, Z_Construct_UClass_UOverheadWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverheadWidget.OuterSingleton;
	}
	template<> VOXS_API UClass* StaticClass<UOverheadWidget>()
	{
		return UOverheadWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverheadWidget);
	struct Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_HUD_OverheadWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_HUD_OverheadWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverheadWidget, UOverheadWidget::StaticClass, TEXT("UOverheadWidget"), &Z_Registration_Info_UClass_UOverheadWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverheadWidget), 1776620765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_HUD_OverheadWidget_h_3690344716(TEXT("/Script/Voxs"),
		Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_HUD_OverheadWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_HUD_OverheadWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
