// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/NonPlayerCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonPlayerCharacterBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerCharacterBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerCharacterBase();
	LONGVINTER_API UClass* Z_Construct_UClass_ACharacterBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void ANonPlayerCharacterBase::StaticRegisterNativesANonPlayerCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANonPlayerCharacterBase);
	UClass* Z_Construct_UClass_ANonPlayerCharacterBase_NoRegister()
	{
		return ANonPlayerCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ANonPlayerCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANonPlayerCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANonPlayerCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/NonPlayerCharacterBase.h" },
		{ "ModuleRelativePath", "Character/NonPlayerCharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANonPlayerCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANonPlayerCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANonPlayerCharacterBase_Statics::ClassParams = {
		&ANonPlayerCharacterBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANonPlayerCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANonPlayerCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANonPlayerCharacterBase()
	{
		if (!Z_Registration_Info_UClass_ANonPlayerCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANonPlayerCharacterBase.OuterSingleton, Z_Construct_UClass_ANonPlayerCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANonPlayerCharacterBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ANonPlayerCharacterBase>()
	{
		return ANonPlayerCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANonPlayerCharacterBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANonPlayerCharacterBase, ANonPlayerCharacterBase::StaticClass, TEXT("ANonPlayerCharacterBase"), &Z_Registration_Info_UClass_ANonPlayerCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANonPlayerCharacterBase), 136744095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerCharacterBase_h_2927368874(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_NonPlayerCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
