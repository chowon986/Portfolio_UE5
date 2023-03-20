// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/LvPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLvPlayerController() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ALvPlayerController_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ALvPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ALvPlayerController::StaticRegisterNativesALvPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALvPlayerController);
	UClass* Z_Construct_UClass_ALvPlayerController_NoRegister()
	{
		return ALvPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALvPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_StartHUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_StartHUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_StartHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_StartHUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALvPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/LvPlayerController.h" },
		{ "ModuleRelativePath", "Character/LvPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUDClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Component" },
		{ "ModuleRelativePath", "Character/LvPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUDClass = { "m_StartHUDClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALvPlayerController, m_StartHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUDClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LvPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUD = { "m_StartHUD", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALvPlayerController, m_StartHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALvPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALvPlayerController_Statics::NewProp_m_StartHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALvPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALvPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALvPlayerController_Statics::ClassParams = {
		&ALvPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALvPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALvPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALvPlayerController()
	{
		if (!Z_Registration_Info_UClass_ALvPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALvPlayerController.OuterSingleton, Z_Construct_UClass_ALvPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALvPlayerController.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ALvPlayerController>()
	{
		return ALvPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALvPlayerController);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALvPlayerController, ALvPlayerController::StaticClass, TEXT("ALvPlayerController"), &Z_Registration_Info_UClass_ALvPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALvPlayerController), 2549563902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerController_h_2439414081(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
