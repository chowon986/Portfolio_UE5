// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/BasicVendor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicVendor() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ABasicVendor_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ABasicVendor();
	LONGVINTER_API UClass* Z_Construct_UClass_AVendorBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void ABasicVendor::StaticRegisterNativesABasicVendor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicVendor);
	UClass* Z_Construct_UClass_ABasicVendor_NoRegister()
	{
		return ABasicVendor::StaticClass();
	}
	struct Z_Construct_UClass_ABasicVendor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicVendor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVendorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicVendor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/BasicVendor.h" },
		{ "ModuleRelativePath", "Character/BasicVendor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicVendor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicVendor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicVendor_Statics::ClassParams = {
		&ABasicVendor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABasicVendor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicVendor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicVendor()
	{
		if (!Z_Registration_Info_UClass_ABasicVendor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicVendor.OuterSingleton, Z_Construct_UClass_ABasicVendor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasicVendor.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ABasicVendor>()
	{
		return ABasicVendor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicVendor);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_BasicVendor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_BasicVendor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasicVendor, ABasicVendor::StaticClass, TEXT("ABasicVendor"), &Z_Registration_Info_UClass_ABasicVendor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicVendor), 1581021506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_BasicVendor_h_1503154335(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_BasicVendor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_BasicVendor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS