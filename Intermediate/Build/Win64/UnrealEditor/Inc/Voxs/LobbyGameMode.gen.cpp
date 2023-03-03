// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxs/GameMode/LobbyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGameMode() {}
// Cross Module References
	VOXS_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister();
	VOXS_API UClass* Z_Construct_UClass_ALobbyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Voxs();
// End Cross Module References
	void ALobbyGameMode::StaticRegisterNativesALobbyGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyGameMode);
	UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister()
	{
		return ALobbyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/LobbyGameMode.h" },
		{ "ModuleRelativePath", "GameMode/LobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams = {
		&ALobbyGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyGameMode()
	{
		if (!Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton, Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton;
	}
	template<> VOXS_API UClass* StaticClass<ALobbyGameMode>()
	{
		return ALobbyGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGameMode);
	struct Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_GameMode_LobbyGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_GameMode_LobbyGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyGameMode, ALobbyGameMode::StaticClass, TEXT("ALobbyGameMode"), &Z_Registration_Info_UClass_ALobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyGameMode), 390060969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_GameMode_LobbyGameMode_h_1671679055(TEXT("/Script/Voxs"),
		Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_GameMode_LobbyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Voxs_Source_Voxs_GameMode_LobbyGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
