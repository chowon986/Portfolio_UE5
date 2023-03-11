// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/PlayerInfoBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInfoBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UPlayerInfoBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UPlayerInfoBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void UPlayerInfoBase::StaticRegisterNativesUPlayerInfoBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInfoBase);
	UClass* Z_Construct_UClass_UPlayerInfoBase_NoRegister()
	{
		return UPlayerInfoBase::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInfoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInfoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInfoBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/PlayerInfoBase.h" },
		{ "ModuleRelativePath", "UMG/PlayerInfoBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInfoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInfoBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInfoBase_Statics::ClassParams = {
		&UPlayerInfoBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInfoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInfoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInfoBase()
	{
		if (!Z_Registration_Info_UClass_UPlayerInfoBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInfoBase.OuterSingleton, Z_Construct_UClass_UPlayerInfoBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInfoBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UPlayerInfoBase>()
	{
		return UPlayerInfoBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInfoBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_PlayerInfoBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_PlayerInfoBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInfoBase, UPlayerInfoBase::StaticClass, TEXT("UPlayerInfoBase"), &Z_Registration_Info_UClass_UPlayerInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInfoBase), 1109894348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_PlayerInfoBase_h_3277001194(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_PlayerInfoBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_PlayerInfoBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
