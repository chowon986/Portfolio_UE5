// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/RandomBoxBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomBoxBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_URandomBoxBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_URandomBoxBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void URandomBoxBase::StaticRegisterNativesURandomBoxBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URandomBoxBase);
	UClass* Z_Construct_UClass_URandomBoxBase_NoRegister()
	{
		return URandomBoxBase::StaticClass();
	}
	struct Z_Construct_UClass_URandomBoxBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URandomBoxBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomBoxBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/RandomBoxBase.h" },
		{ "ModuleRelativePath", "UMG/RandomBoxBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URandomBoxBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomBoxBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URandomBoxBase_Statics::ClassParams = {
		&URandomBoxBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URandomBoxBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URandomBoxBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URandomBoxBase()
	{
		if (!Z_Registration_Info_UClass_URandomBoxBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URandomBoxBase.OuterSingleton, Z_Construct_UClass_URandomBoxBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URandomBoxBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<URandomBoxBase>()
	{
		return URandomBoxBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URandomBoxBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URandomBoxBase, URandomBoxBase::StaticClass, TEXT("URandomBoxBase"), &Z_Registration_Info_UClass_URandomBoxBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URandomBoxBase), 3772692513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxBase_h_3308648327(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
