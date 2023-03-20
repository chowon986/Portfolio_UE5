// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/RandomBoxItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomBoxItem() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_URandomBoxItem_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_URandomBoxItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void URandomBoxItem::StaticRegisterNativesURandomBoxItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URandomBoxItem);
	UClass* Z_Construct_UClass_URandomBoxItem_NoRegister()
	{
		return URandomBoxItem::StaticClass();
	}
	struct Z_Construct_UClass_URandomBoxItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URandomBoxItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomBoxItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/RandomBoxItem.h" },
		{ "ModuleRelativePath", "UMG/RandomBoxItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URandomBoxItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomBoxItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URandomBoxItem_Statics::ClassParams = {
		&URandomBoxItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URandomBoxItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URandomBoxItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URandomBoxItem()
	{
		if (!Z_Registration_Info_UClass_URandomBoxItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URandomBoxItem.OuterSingleton, Z_Construct_UClass_URandomBoxItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URandomBoxItem.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<URandomBoxItem>()
	{
		return URandomBoxItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URandomBoxItem);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URandomBoxItem, URandomBoxItem::StaticClass, TEXT("URandomBoxItem"), &Z_Registration_Info_UClass_URandomBoxItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URandomBoxItem), 336391018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxItem_h_1777783457(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_RandomBoxItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
