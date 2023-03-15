// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/Mushroom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMushroom() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_AMushroom_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_AMushroom();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerActorBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AMushroom::StaticRegisterNativesAMushroom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMushroom);
	UClass* Z_Construct_UClass_AMushroom_NoRegister()
	{
		return AMushroom::StaticClass();
	}
	struct Z_Construct_UClass_AMushroom_Statics
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
	UObject* (*const Z_Construct_UClass_AMushroom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANonPlayerActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMushroom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/Mushroom.h" },
		{ "ModuleRelativePath", "Character/Mushroom.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMushroom_Statics::NewProp_mCapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Mushroom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Mushroom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMushroom_Statics::NewProp_mCapsuleComponent = { "mCapsuleComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMushroom, mCapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMushroom_Statics::NewProp_mCapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMushroom_Statics::NewProp_mCapsuleComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMushroom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMushroom_Statics::NewProp_mCapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMushroom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMushroom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMushroom_Statics::ClassParams = {
		&AMushroom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMushroom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMushroom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMushroom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMushroom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMushroom()
	{
		if (!Z_Registration_Info_UClass_AMushroom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMushroom.OuterSingleton, Z_Construct_UClass_AMushroom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMushroom.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<AMushroom>()
	{
		return AMushroom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMushroom);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_Mushroom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_Mushroom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMushroom, AMushroom::StaticClass, TEXT("AMushroom"), &Z_Registration_Info_UClass_AMushroom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMushroom), 2836367810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_Mushroom_h_938206476(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_Mushroom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_Mushroom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
