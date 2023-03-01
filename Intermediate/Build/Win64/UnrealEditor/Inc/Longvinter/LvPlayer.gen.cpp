// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/LvPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLvPlayer() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ALvPlayer_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ALvPlayer();
	LONGVINTER_API UClass* Z_Construct_UClass_APlayerCharacterBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void ALvPlayer::StaticRegisterNativesALvPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALvPlayer);
	UClass* Z_Construct_UClass_ALvPlayer_NoRegister()
	{
		return ALvPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ALvPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALvPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LvPlayer.h" },
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALvPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALvPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALvPlayer_Statics::ClassParams = {
		&ALvPlayer::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ALvPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALvPlayer()
	{
		if (!Z_Registration_Info_UClass_ALvPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALvPlayer.OuterSingleton, Z_Construct_UClass_ALvPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALvPlayer.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ALvPlayer>()
	{
		return ALvPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALvPlayer);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALvPlayer, ALvPlayer::StaticClass, TEXT("ALvPlayer"), &Z_Registration_Info_UClass_ALvPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALvPlayer), 352366364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_472219426(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
