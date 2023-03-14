// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/InventoryBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UInventoryBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UInventoryBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void UInventoryBase::StaticRegisterNativesUInventoryBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryBase);
	UClass* Z_Construct_UClass_UInventoryBase_NoRegister()
	{
		return UInventoryBase::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/InventoryBase.h" },
		{ "ModuleRelativePath", "UMG/InventoryBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryBase_Statics::ClassParams = {
		&UInventoryBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInventoryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryBase()
	{
		if (!Z_Registration_Info_UClass_UInventoryBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryBase.OuterSingleton, Z_Construct_UClass_UInventoryBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UInventoryBase>()
	{
		return UInventoryBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryBase, UInventoryBase::StaticClass, TEXT("UInventoryBase"), &Z_Registration_Info_UClass_UInventoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryBase), 4286701771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryBase_h_4187682129(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
