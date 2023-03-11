// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/NonPlayerActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonPlayerActorBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerActorBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerActorBase();
	LONGVINTER_API UClass* Z_Construct_UClass_AActorBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void ANonPlayerActorBase::StaticRegisterNativesANonPlayerActorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANonPlayerActorBase);
	UClass* Z_Construct_UClass_ANonPlayerActorBase_NoRegister()
	{
		return ANonPlayerActorBase::StaticClass();
	}
	struct Z_Construct_UClass_ANonPlayerActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANonPlayerActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANonPlayerActorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/NonPlayerActorBase.h" },
		{ "ModuleRelativePath", "Character/NonPlayerActorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANonPlayerActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANonPlayerActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANonPlayerActorBase_Statics::ClassParams = {
		&ANonPlayerActorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANonPlayerActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANonPlayerActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANonPlayerActorBase()
	{
		if (!Z_Registration_Info_UClass_ANonPlayerActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANonPlayerActorBase.OuterSingleton, Z_Construct_UClass_ANonPlayerActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANonPlayerActorBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ANonPlayerActorBase>()
	{
		return ANonPlayerActorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANonPlayerActorBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANonPlayerActorBase, ANonPlayerActorBase::StaticClass, TEXT("ANonPlayerActorBase"), &Z_Registration_Info_UClass_ANonPlayerActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANonPlayerActorBase), 160187653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerActorBase_h_2987815988(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
