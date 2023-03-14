// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/LvGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLvGameInstance() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ULvGameInstance_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ULvGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void ULvGameInstance::StaticRegisterNativesULvGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULvGameInstance);
	UClass* Z_Construct_UClass_ULvGameInstance_NoRegister()
	{
		return ULvGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULvGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULvGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LvGameInstance.h" },
		{ "ModuleRelativePath", "LvGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULvGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULvGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULvGameInstance_Statics::ClassParams = {
		&ULvGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULvGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULvGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULvGameInstance()
	{
		if (!Z_Registration_Info_UClass_ULvGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULvGameInstance.OuterSingleton, Z_Construct_UClass_ULvGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULvGameInstance.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ULvGameInstance>()
	{
		return ULvGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULvGameInstance);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LvGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LvGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULvGameInstance, ULvGameInstance::StaticClass, TEXT("ULvGameInstance"), &Z_Registration_Info_UClass_ULvGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULvGameInstance), 2180501420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LvGameInstance_h_472021714(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LvGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_LvGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
