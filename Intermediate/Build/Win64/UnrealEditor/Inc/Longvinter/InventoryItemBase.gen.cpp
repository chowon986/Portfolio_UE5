// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/InventoryItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UInventoryItemBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UInventoryItemBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryItemBase::execInitFromData)
	{
		P_GET_OBJECT(UObject,Z_Param__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitFromData(Z_Param__Data);
		P_NATIVE_END;
	}
	void UInventoryItemBase::StaticRegisterNativesUInventoryItemBase()
	{
		UClass* Class = UInventoryItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitFromData", &UInventoryItemBase::execInitFromData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics
	{
		struct InventoryItemBase_eventInitFromData_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryItemBase_eventInitFromData_Parms, _Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::NewProp__Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/InventoryItemBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemBase, nullptr, "InitFromData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::InventoryItemBase_eventInitFromData_Parms), Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryItemBase_InitFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemBase_InitFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemBase);
	UClass* Z_Construct_UClass_UInventoryItemBase_NoRegister()
	{
		return UInventoryItemBase::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryItemBase_InitFromData, "InitFromData" }, // 3462956606
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/InventoryItemBase.h" },
		{ "ModuleRelativePath", "UMG/InventoryItemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemBase_Statics::ClassParams = {
		&UInventoryItemBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItemBase()
	{
		if (!Z_Registration_Info_UClass_UInventoryItemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemBase.OuterSingleton, Z_Construct_UClass_UInventoryItemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryItemBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UInventoryItemBase>()
	{
		return UInventoryItemBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryItemBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryItemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemBase, UInventoryItemBase::StaticClass, TEXT("UInventoryItemBase"), &Z_Registration_Info_UClass_UInventoryItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemBase), 4170481703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryItemBase_h_3660681204(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_InventoryItemBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
