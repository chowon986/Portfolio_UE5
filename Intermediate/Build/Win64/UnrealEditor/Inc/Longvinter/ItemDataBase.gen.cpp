// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/ItemDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UItemDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void UItemDataBase::StaticRegisterNativesUItemDataBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDataBase);
	UClass* Z_Construct_UClass_UItemDataBase_NoRegister()
	{
		return UItemDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UItemDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDataBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/ItemDataBase.h" },
		{ "ModuleRelativePath", "UMG/ItemDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDataBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDataBase_Statics::ClassParams = {
		&UItemDataBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemDataBase()
	{
		if (!Z_Registration_Info_UClass_UItemDataBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDataBase.OuterSingleton, Z_Construct_UClass_UItemDataBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemDataBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UItemDataBase>()
	{
		return UItemDataBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDataBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_ItemDataBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_ItemDataBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemDataBase, UItemDataBase::StaticClass, TEXT("UItemDataBase"), &Z_Registration_Info_UClass_UItemDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDataBase), 77659660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_ItemDataBase_h_304819534(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_ItemDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_ItemDataBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
