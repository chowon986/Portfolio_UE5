// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/ObjectSpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectSpawnPoint() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_AObjectSpawnPoint_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_AObjectSpawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerActorBase_NoRegister();
// End Cross Module References
	void AObjectSpawnPoint::StaticRegisterNativesAObjectSpawnPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObjectSpawnPoint);
	UClass* Z_Construct_UClass_AObjectSpawnPoint_NoRegister()
	{
		return AObjectSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_AObjectSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mSpawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpawnIntervalTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mSpawnIntervalTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectSpawnPoint.h" },
		{ "ModuleRelativePath", "ObjectSpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectSpawnPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObjectSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mRoot = { "mRoot", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawnPoint, mRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectSpawnPoint" },
		{ "ModuleRelativePath", "ObjectSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnClass = { "mSpawnClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawnPoint, mSpawnClass), Z_Construct_UClass_ANonPlayerActorBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnIntervalTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectSpawnPoint" },
		{ "ModuleRelativePath", "ObjectSpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnIntervalTime = { "mSpawnIntervalTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectSpawnPoint, mSpawnIntervalTime), METADATA_PARAMS(Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnIntervalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnIntervalTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectSpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectSpawnPoint_Statics::NewProp_mSpawnIntervalTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectSpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObjectSpawnPoint_Statics::ClassParams = {
		&AObjectSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObjectSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjectSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectSpawnPoint()
	{
		if (!Z_Registration_Info_UClass_AObjectSpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObjectSpawnPoint.OuterSingleton, Z_Construct_UClass_AObjectSpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObjectSpawnPoint.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<AObjectSpawnPoint>()
	{
		return AObjectSpawnPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectSpawnPoint);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_ObjectSpawnPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_ObjectSpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObjectSpawnPoint, AObjectSpawnPoint::StaticClass, TEXT("AObjectSpawnPoint"), &Z_Registration_Info_UClass_AObjectSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObjectSpawnPoint), 493718501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_ObjectSpawnPoint_h_4049717599(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_ObjectSpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_ObjectSpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
