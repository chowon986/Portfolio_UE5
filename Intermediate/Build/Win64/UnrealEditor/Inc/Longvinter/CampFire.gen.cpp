// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/CampFire.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampFire() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ACampFire_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ACampFire();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerActorBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void ACampFire::StaticRegisterNativesACampFire()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACampFire);
	UClass* Z_Construct_UClass_ACampFire_NoRegister()
	{
		return ACampFire::StaticClass();
	}
	struct Z_Construct_UClass_ACampFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACampFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANonPlayerActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACampFire_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/CampFire.h" },
		{ "ModuleRelativePath", "Character/CampFire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACampFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACampFire>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACampFire_Statics::ClassParams = {
		&ACampFire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACampFire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACampFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACampFire()
	{
		if (!Z_Registration_Info_UClass_ACampFire.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACampFire.OuterSingleton, Z_Construct_UClass_ACampFire_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACampFire.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ACampFire>()
	{
		return ACampFire::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACampFire);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_CampFire_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_CampFire_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACampFire, ACampFire::StaticClass, TEXT("ACampFire"), &Z_Registration_Info_UClass_ACampFire, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACampFire), 3941594087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_CampFire_h_3152632576(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_CampFire_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_CampFire_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
