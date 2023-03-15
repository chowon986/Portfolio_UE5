// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/MainHUDBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHUDBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UMainHUDBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UMainHUDBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	DEFINE_FUNCTION(UMainHUDBase::execOnItemIconHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemIconHovered();
		P_NATIVE_END;
	}
	void UMainHUDBase::StaticRegisterNativesUMainHUDBase()
	{
		UClass* Class = UMainHUDBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnItemIconHovered", &UMainHUDBase::execOnItemIconHovered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainHUDBase_OnItemIconHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainHUDBase_OnItemIconHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/MainHUDBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainHUDBase_OnItemIconHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainHUDBase, nullptr, "OnItemIconHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainHUDBase_OnItemIconHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainHUDBase_OnItemIconHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainHUDBase_OnItemIconHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainHUDBase_OnItemIconHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainHUDBase);
	UClass* Z_Construct_UClass_UMainHUDBase_NoRegister()
	{
		return UMainHUDBase::StaticClass();
	}
	struct Z_Construct_UClass_UMainHUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainHUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainHUDBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainHUDBase_OnItemIconHovered, "OnItemIconHovered" }, // 1652279506
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainHUDBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/MainHUDBase.h" },
		{ "ModuleRelativePath", "UMG/MainHUDBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainHUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainHUDBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainHUDBase_Statics::ClassParams = {
		&UMainHUDBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainHUDBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainHUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainHUDBase()
	{
		if (!Z_Registration_Info_UClass_UMainHUDBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainHUDBase.OuterSingleton, Z_Construct_UClass_UMainHUDBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainHUDBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UMainHUDBase>()
	{
		return UMainHUDBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainHUDBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_MainHUDBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_MainHUDBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainHUDBase, UMainHUDBase::StaticClass, TEXT("UMainHUDBase"), &Z_Registration_Info_UClass_UMainHUDBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainHUDBase), 655532585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_MainHUDBase_h_2534533131(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_MainHUDBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_MainHUDBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
