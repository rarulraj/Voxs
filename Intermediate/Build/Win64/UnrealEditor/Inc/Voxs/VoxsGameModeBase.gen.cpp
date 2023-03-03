// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxs/VoxsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxsGameModeBase() {}
// Cross Module References
	VOXS_API UClass* Z_Construct_UClass_AVoxsGameModeBase_NoRegister();
	VOXS_API UClass* Z_Construct_UClass_AVoxsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Voxs();
// End Cross Module References
	void AVoxsGameModeBase::StaticRegisterNativesAVoxsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxsGameModeBase);
	UClass* Z_Construct_UClass_AVoxsGameModeBase_NoRegister()
	{
		return AVoxsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVoxsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VoxsGameModeBase.h" },
		{ "ModuleRelativePath", "VoxsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxsGameModeBase_Statics::ClassParams = {
		&AVoxsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVoxsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AVoxsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxsGameModeBase.OuterSingleton, Z_Construct_UClass_AVoxsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxsGameModeBase.OuterSingleton;
	}
	template<> VOXS_API UClass* StaticClass<AVoxsGameModeBase>()
	{
		return AVoxsGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxsGameModeBase);
	struct Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxsGameModeBase, AVoxsGameModeBase::StaticClass, TEXT("AVoxsGameModeBase"), &Z_Registration_Info_UClass_AVoxsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxsGameModeBase), 782551191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxsGameModeBase_h_3843765984(TEXT("/Script/Voxs"),
		Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_VoxsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
