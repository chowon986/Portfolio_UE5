// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Inventory/Inventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UInventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventory::execShowInventory)
	{
		P_GET_UBOOL(Z_Param_Show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowInventory(Z_Param_Show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetInst)
	{
		P_GET_OBJECT(UGameInstance,Z_Param__GameInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventory**)Z_Param__Result=UInventory::GetInst(Z_Param__GameInst);
		P_NATIVE_END;
	}
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInst", &UInventory::execGetInst },
			{ "ShowInventory", &UInventory::execShowInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_GetInst_Statics
	{
		struct Inventory_eventGetInst_Parms
		{
			UGameInstance* _GameInst;
			UInventory* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__GameInst;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetInst_Statics::NewProp__GameInst = { "_GameInst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetInst_Parms, _GameInst), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventory_GetInst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetInst_Parms, ReturnValue), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetInst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetInst_Statics::NewProp__GameInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetInst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetInst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetInst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetInst", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventory_GetInst_Statics::Inventory_eventGetInst_Parms), Z_Construct_UFunction_UInventory_GetInst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetInst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetInst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetInst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetInst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_GetInst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_ShowInventory_Statics
	{
		struct Inventory_eventShowInventory_Parms
		{
			bool Show;
		};
		static void NewProp_Show_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Show;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_ShowInventory_Statics::NewProp_Show_SetBit(void* Obj)
	{
		((Inventory_eventShowInventory_Parms*)Obj)->Show = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_ShowInventory_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventShowInventory_Parms), &Z_Construct_UFunction_UInventory_ShowInventory_Statics::NewProp_Show_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ShowInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ShowInventory_Statics::NewProp_Show,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_ShowInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ShowInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ShowInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventory_ShowInventory_Statics::Inventory_eventShowInventory_Parms), Z_Construct_UFunction_UInventory_ShowInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ShowInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_ShowInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ShowInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_ShowInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventory_ShowInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventory);
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_GetInst, "GetInst" }, // 1276735056
		{ &Z_Construct_UFunction_UInventory_ShowInventory, "ShowInventory" }, // 1719458714
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Inventory/Inventory.h" },
		{ "ModuleRelativePath", "Inventory/Inventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		if (!Z_Registration_Info_UClass_UInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventory.OuterSingleton, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventory.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UInventory>()
	{
		return UInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventory, UInventory::StaticClass, TEXT("UInventory"), &Z_Registration_Info_UClass_UInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventory), 4124065864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_2819393817(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
