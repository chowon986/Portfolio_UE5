// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/VendorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVendorBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_AVendorBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_AVendorBase();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerActorBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void AVendorBase::StaticRegisterNativesAVendorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVendorBase);
	UClass* Z_Construct_UClass_AVendorBase_NoRegister()
	{
		return AVendorBase::StaticClass();
	}
	struct Z_Construct_UClass_AVendorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVendorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANonPlayerActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVendorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/VendorBase.h" },
		{ "ModuleRelativePath", "Character/VendorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVendorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVendorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVendorBase_Statics::ClassParams = {
		&AVendorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVendorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVendorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVendorBase()
	{
		if (!Z_Registration_Info_UClass_AVendorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVendorBase.OuterSingleton, Z_Construct_UClass_AVendorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVendorBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<AVendorBase>()
	{
		return AVendorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVendorBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_VendorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_VendorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVendorBase, AVendorBase::StaticClass, TEXT("AVendorBase"), &Z_Registration_Info_UClass_AVendorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVendorBase), 3507322342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_VendorBase_h_2619090148(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_VendorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_VendorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
