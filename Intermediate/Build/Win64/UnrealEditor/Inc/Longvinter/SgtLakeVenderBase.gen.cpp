// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/SgtLakeVenderBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSgtLakeVenderBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_USgtLakeVenderBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_USgtLakeVenderBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void USgtLakeVenderBase::StaticRegisterNativesUSgtLakeVenderBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USgtLakeVenderBase);
	UClass* Z_Construct_UClass_USgtLakeVenderBase_NoRegister()
	{
		return USgtLakeVenderBase::StaticClass();
	}
	struct Z_Construct_UClass_USgtLakeVenderBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USgtLakeVenderBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USgtLakeVenderBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/SgtLakeVenderBase.h" },
		{ "ModuleRelativePath", "UMG/SgtLakeVenderBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USgtLakeVenderBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USgtLakeVenderBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USgtLakeVenderBase_Statics::ClassParams = {
		&USgtLakeVenderBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USgtLakeVenderBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USgtLakeVenderBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USgtLakeVenderBase()
	{
		if (!Z_Registration_Info_UClass_USgtLakeVenderBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USgtLakeVenderBase.OuterSingleton, Z_Construct_UClass_USgtLakeVenderBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USgtLakeVenderBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<USgtLakeVenderBase>()
	{
		return USgtLakeVenderBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USgtLakeVenderBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USgtLakeVenderBase, USgtLakeVenderBase::StaticClass, TEXT("USgtLakeVenderBase"), &Z_Registration_Info_UClass_USgtLakeVenderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USgtLakeVenderBase), 2563905956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderBase_h_1492147554(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
