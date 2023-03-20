// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/LongvinterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLongvinterGameModeBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ALongvinterGameModeBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ALongvinterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void ALongvinterGameModeBase::StaticRegisterNativesALongvinterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALongvinterGameModeBase);
	UClass* Z_Construct_UClass_ALongvinterGameModeBase_NoRegister()
	{
		return ALongvinterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALongvinterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALongvinterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALongvinterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LongvinterGameModeBase.h" },
		{ "ModuleRelativePath", "LongvinterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALongvinterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALongvinterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALongvinterGameModeBase_Statics::ClassParams = {
		&ALongvinterGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALongvinterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALongvinterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALongvinterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ALongvinterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALongvinterGameModeBase.OuterSingleton, Z_Construct_UClass_ALongvinterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALongvinterGameModeBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ALongvinterGameModeBase>()
	{
		return ALongvinterGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALongvinterGameModeBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LongvinterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LongvinterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALongvinterGameModeBase, ALongvinterGameModeBase::StaticClass, TEXT("ALongvinterGameModeBase"), &Z_Registration_Info_UClass_ALongvinterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALongvinterGameModeBase), 823773248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LongvinterGameModeBase_h_4276573666(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LongvinterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LongvinterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
