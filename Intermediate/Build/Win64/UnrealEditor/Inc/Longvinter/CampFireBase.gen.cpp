// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/CampFireBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampFireBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UCampFireBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UCampFireBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void UCampFireBase::StaticRegisterNativesUCampFireBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCampFireBase);
	UClass* Z_Construct_UClass_UCampFireBase_NoRegister()
	{
		return UCampFireBase::StaticClass();
	}
	struct Z_Construct_UClass_UCampFireBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCampFireBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCampFireBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/CampFireBase.h" },
		{ "ModuleRelativePath", "UMG/CampFireBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCampFireBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCampFireBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCampFireBase_Statics::ClassParams = {
		&UCampFireBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCampFireBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCampFireBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCampFireBase()
	{
		if (!Z_Registration_Info_UClass_UCampFireBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCampFireBase.OuterSingleton, Z_Construct_UClass_UCampFireBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCampFireBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UCampFireBase>()
	{
		return UCampFireBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCampFireBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCampFireBase, UCampFireBase::StaticClass, TEXT("UCampFireBase"), &Z_Registration_Info_UClass_UCampFireBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCampFireBase), 3608603901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_152446822(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
