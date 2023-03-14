// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/SgtLakeVenderItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSgtLakeVenderItemBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_USgtLakeVenderItemBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_USgtLakeVenderItemBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USgtLakeVenderItemBase::execInitFromData)
	{
		P_GET_OBJECT(UObject,Z_Param__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitFromData(Z_Param__Data);
		P_NATIVE_END;
	}
	void USgtLakeVenderItemBase::StaticRegisterNativesUSgtLakeVenderItemBase()
	{
		UClass* Class = USgtLakeVenderItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitFromData", &USgtLakeVenderItemBase::execInitFromData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics
	{
		struct SgtLakeVenderItemBase_eventInitFromData_Parms
		{
			UObject* _Data;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SgtLakeVenderItemBase_eventInitFromData_Parms, _Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::NewProp__Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/SgtLakeVenderItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USgtLakeVenderItemBase, nullptr, "InitFromData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::SgtLakeVenderItemBase_eventInitFromData_Parms), Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USgtLakeVenderItemBase);
	UClass* Z_Construct_UClass_USgtLakeVenderItemBase_NoRegister()
	{
		return USgtLakeVenderItemBase::StaticClass();
	}
	struct Z_Construct_UClass_USgtLakeVenderItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USgtLakeVenderItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USgtLakeVenderItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USgtLakeVenderItemBase_InitFromData, "InitFromData" }, // 2049166763
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USgtLakeVenderItemBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/SgtLakeVenderItemBase.h" },
		{ "ModuleRelativePath", "UMG/SgtLakeVenderItemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USgtLakeVenderItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USgtLakeVenderItemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USgtLakeVenderItemBase_Statics::ClassParams = {
		&USgtLakeVenderItemBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USgtLakeVenderItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USgtLakeVenderItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USgtLakeVenderItemBase()
	{
		if (!Z_Registration_Info_UClass_USgtLakeVenderItemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USgtLakeVenderItemBase.OuterSingleton, Z_Construct_UClass_USgtLakeVenderItemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USgtLakeVenderItemBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<USgtLakeVenderItemBase>()
	{
		return USgtLakeVenderItemBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USgtLakeVenderItemBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderItemBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderItemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USgtLakeVenderItemBase, USgtLakeVenderItemBase::StaticClass, TEXT("USgtLakeVenderItemBase"), &Z_Registration_Info_UClass_USgtLakeVenderItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USgtLakeVenderItemBase), 2399590120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderItemBase_h_2424270799(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_SgtLakeVenderItemBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
