// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/FishingSpot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishingSpot() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_AFishingSpot_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_AFishingSpot();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerActorBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AFishingSpot::StaticRegisterNativesAFishingSpot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFishingSpot);
	UClass* Z_Construct_UClass_AFishingSpot_NoRegister()
	{
		return AFishingSpot::StaticClass();
	}
	struct Z_Construct_UClass_AFishingSpot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCapsuleComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFishingSpot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANonPlayerActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingSpot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/FishingSpot.h" },
		{ "ModuleRelativePath", "Character/FishingSpot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishingSpot_Statics::NewProp_mCapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FishingSpot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/FishingSpot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFishingSpot_Statics::NewProp_mCapsuleComponent = { "mCapsuleComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFishingSpot, mCapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFishingSpot_Statics::NewProp_mCapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFishingSpot_Statics::NewProp_mCapsuleComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFishingSpot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishingSpot_Statics::NewProp_mCapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFishingSpot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFishingSpot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFishingSpot_Statics::ClassParams = {
		&AFishingSpot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFishingSpot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFishingSpot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFishingSpot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFishingSpot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFishingSpot()
	{
		if (!Z_Registration_Info_UClass_AFishingSpot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFishingSpot.OuterSingleton, Z_Construct_UClass_AFishingSpot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFishingSpot.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<AFishingSpot>()
	{
		return AFishingSpot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishingSpot);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_FishingSpot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_FishingSpot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFishingSpot, AFishingSpot::StaticClass, TEXT("AFishingSpot"), &Z_Registration_Info_UClass_AFishingSpot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFishingSpot), 3845459578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_FishingSpot_h_3040187620(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_FishingSpot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_FishingSpot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
