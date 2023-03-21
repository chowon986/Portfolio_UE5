// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Component/CraftComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftComponent() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UCraftComponent_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UCraftComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	void UCraftComponent::StaticRegisterNativesUCraftComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCraftComponent);
	UClass* Z_Construct_UClass_UCraftComponent_NoRegister()
	{
		return UCraftComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCraftComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/CraftComponent.h" },
		{ "ModuleRelativePath", "Component/CraftComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraftComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCraftComponent_Statics::ClassParams = {
		&UCraftComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCraftComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCraftComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCraftComponent()
	{
		if (!Z_Registration_Info_UClass_UCraftComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCraftComponent.OuterSingleton, Z_Construct_UClass_UCraftComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCraftComponent.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UCraftComponent>()
	{
		return UCraftComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftComponent);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCraftComponent, UCraftComponent::StaticClass, TEXT("UCraftComponent"), &Z_Registration_Info_UClass_UCraftComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCraftComponent), 2726887349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_3667975087(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
