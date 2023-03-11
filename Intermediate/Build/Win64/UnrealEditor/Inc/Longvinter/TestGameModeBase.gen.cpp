// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/TestGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGameModeBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ATestGameModeBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ATestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void ATestGameModeBase::StaticRegisterNativesATestGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestGameModeBase);
	UClass* Z_Construct_UClass_ATestGameModeBase_NoRegister()
	{
		return ATestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestGameModeBase.h" },
		{ "ModuleRelativePath", "TestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestGameModeBase_Statics::ClassParams = {
		&ATestGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATestGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestGameModeBase.OuterSingleton, Z_Construct_UClass_ATestGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestGameModeBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ATestGameModeBase>()
	{
		return ATestGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestGameModeBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_TestGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_TestGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestGameModeBase, ATestGameModeBase::StaticClass, TEXT("ATestGameModeBase"), &Z_Registration_Info_UClass_ATestGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestGameModeBase), 2822807049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_TestGameModeBase_h_192932095(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_TestGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_TestGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
