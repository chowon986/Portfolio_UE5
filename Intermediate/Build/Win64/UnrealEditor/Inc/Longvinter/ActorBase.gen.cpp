// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/ActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_AActorBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_AActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void AActorBase::StaticRegisterNativesAActorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorBase);
	UClass* Z_Construct_UClass_AActorBase_NoRegister()
	{
		return AActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Character/ActorBase.h" },
		{ "ModuleRelativePath", "Character/ActorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorBase_Statics::ClassParams = {
		&AActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorBase()
	{
		if (!Z_Registration_Info_UClass_AActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorBase.OuterSingleton, Z_Construct_UClass_AActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActorBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<AActorBase>()
	{
		return AActorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActorBase, AActorBase::StaticClass, TEXT("AActorBase"), &Z_Registration_Info_UClass_AActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorBase), 217640675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ActorBase_h_2862933654(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
