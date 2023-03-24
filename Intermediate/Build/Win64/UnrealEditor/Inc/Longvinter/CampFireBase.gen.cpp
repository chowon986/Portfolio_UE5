// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/UMG/CampFireBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampFireBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UCampFireBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UCampFireBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCampFireBase::execOnCancelCraftItem)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelCraftItem(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCampFireBase::execOnClickedCraftItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickedCraftItem();
		P_NATIVE_END;
	}
	void UCampFireBase::StaticRegisterNativesUCampFireBase()
	{
		UClass* Class = UCampFireBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelCraftItem", &UCampFireBase::execOnCancelCraftItem },
			{ "OnClickedCraftItem", &UCampFireBase::execOnClickedCraftItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics
	{
		struct CampFireBase_eventOnCancelCraftItem_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CampFireBase_eventOnCancelCraftItem_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/CampFireBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCampFireBase, nullptr, "OnCancelCraftItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::CampFireBase_eventOnCancelCraftItem_Parms), Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCampFireBase_OnClickedCraftItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCampFireBase_OnClickedCraftItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG/CampFireBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCampFireBase_OnClickedCraftItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCampFireBase, nullptr, "OnClickedCraftItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCampFireBase_OnClickedCraftItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCampFireBase_OnClickedCraftItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCampFireBase_OnClickedCraftItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCampFireBase_OnClickedCraftItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCampFireBase);
	UClass* Z_Construct_UClass_UCampFireBase_NoRegister()
	{
		return UCampFireBase::StaticClass();
	}
	struct Z_Construct_UClass_UCampFireBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCampFireBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCampFireBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCampFireBase_OnCancelCraftItem, "OnCancelCraftItem" }, // 1385149600
		{ &Z_Construct_UFunction_UCampFireBase_OnClickedCraftItem, "OnClickedCraftItem" }, // 2561126291
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCampFireBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/CampFireBase.h" },
		{ "ModuleRelativePath", "UMG/CampFireBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCampFireBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCampFireBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCampFireBase_Statics::ClassParams = {
		&UCampFireBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCampFireBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCampFireBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCampFireBase()
	{
		if (!Z_Registration_Info_UClass_UCampFireBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCampFireBase.OuterSingleton, Z_Construct_UClass_UCampFireBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCampFireBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UCampFireBase>()
	{
		return UCampFireBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCampFireBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCampFireBase, UCampFireBase::StaticClass, TEXT("UCampFireBase"), &Z_Registration_Info_UClass_UCampFireBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCampFireBase), 3073663134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_3612112868(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_UMG_CampFireBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
