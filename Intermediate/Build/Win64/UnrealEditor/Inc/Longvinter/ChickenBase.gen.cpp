// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/ChickenBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChickenBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_AChickenBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_AChickenBase();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerCharacterBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void AChickenBase::StaticRegisterNativesAChickenBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChickenBase);
	UClass* Z_Construct_UClass_AChickenBase_NoRegister()
	{
		return AChickenBase::StaticClass();
	}
	struct Z_Construct_UClass_AChickenBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChickenBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANonPlayerCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChickenBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ChickenBase.h" },
		{ "ModuleRelativePath", "Character/ChickenBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChickenBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChickenBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChickenBase_Statics::ClassParams = {
		&AChickenBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChickenBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChickenBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChickenBase()
	{
		if (!Z_Registration_Info_UClass_AChickenBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChickenBase.OuterSingleton, Z_Construct_UClass_AChickenBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChickenBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<AChickenBase>()
	{
		return AChickenBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChickenBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChickenBase, AChickenBase::StaticClass, TEXT("AChickenBase"), &Z_Registration_Info_UClass_AChickenBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChickenBase), 176632229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_4051463375(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
