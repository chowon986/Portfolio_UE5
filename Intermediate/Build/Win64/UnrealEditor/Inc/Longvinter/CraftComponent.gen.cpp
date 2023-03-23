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
	DEFINE_FUNCTION(UCraftComponent::execServerClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerClear_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftComponent::execOnRep_CraftID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CraftID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftComponent::execOnRep_CraftItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CraftItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCraftComponent::execServerAddItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddItem_Implementation(Z_Param_ItemID);
		P_NATIVE_END;
	}
	static FName NAME_UCraftComponent_ServerAddItem = FName(TEXT("ServerAddItem"));
	void UCraftComponent::ServerAddItem(int32 ItemID)
	{
		CraftComponent_eventServerAddItem_Parms Parms;
		Parms.ItemID=ItemID;
		ProcessEvent(FindFunctionChecked(NAME_UCraftComponent_ServerAddItem),&Parms);
	}
	static FName NAME_UCraftComponent_ServerClear = FName(TEXT("ServerClear"));
	void UCraftComponent::ServerClear()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCraftComponent_ServerClear),NULL);
	}
	void UCraftComponent::StaticRegisterNativesUCraftComponent()
	{
		UClass* Class = UCraftComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CraftID", &UCraftComponent::execOnRep_CraftID },
			{ "OnRep_CraftItems", &UCraftComponent::execOnRep_CraftItems },
			{ "ServerAddItem", &UCraftComponent::execServerAddItem },
			{ "ServerClear", &UCraftComponent::execServerClear },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCraftComponent_OnRep_CraftID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftComponent_OnRep_CraftID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/CraftComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftComponent_OnRep_CraftID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftComponent, nullptr, "OnRep_CraftID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftComponent_OnRep_CraftID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftComponent_OnRep_CraftID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftComponent_OnRep_CraftID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCraftComponent_OnRep_CraftID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftComponent_OnRep_CraftItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftComponent_OnRep_CraftItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/CraftComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftComponent_OnRep_CraftItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftComponent, nullptr, "OnRep_CraftItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftComponent_OnRep_CraftItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftComponent_OnRep_CraftItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftComponent_OnRep_CraftItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCraftComponent_OnRep_CraftItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftComponent_eventServerAddItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/CraftComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftComponent, nullptr, "ServerAddItem", nullptr, nullptr, sizeof(CraftComponent_eventServerAddItem_Parms), Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftComponent_ServerAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCraftComponent_ServerAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCraftComponent_ServerClear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCraftComponent_ServerClear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/CraftComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCraftComponent_ServerClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCraftComponent, nullptr, "ServerClear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCraftComponent_ServerClear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCraftComponent_ServerClear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCraftComponent_ServerClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCraftComponent_ServerClear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCraftComponent);
	UClass* Z_Construct_UClass_UCraftComponent_NoRegister()
	{
		return UCraftComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCraftComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mCraftItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCraftItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mCraftItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCraftedItemID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mCraftedItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCraftComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCraftComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCraftComponent_OnRep_CraftID, "OnRep_CraftID" }, // 1215535121
		{ &Z_Construct_UFunction_UCraftComponent_OnRep_CraftItems, "OnRep_CraftItems" }, // 3008830454
		{ &Z_Construct_UFunction_UCraftComponent_ServerAddItem, "ServerAddItem" }, // 3338259284
		{ &Z_Construct_UFunction_UCraftComponent_ServerClear, "ServerClear" }, // 4208845809
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/CraftComponent.h" },
		{ "ModuleRelativePath", "Component/CraftComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftItems_Inner = { "mCraftItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftItems_MetaData[] = {
		{ "ModuleRelativePath", "Component/CraftComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftItems = { "mCraftItems", "OnRep_CraftItems", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCraftComponent, mCraftItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftedItemID_MetaData[] = {
		{ "ModuleRelativePath", "Component/CraftComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftedItemID = { "mCraftedItemID", "OnRep_CraftID", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCraftComponent, mCraftedItemID), METADATA_PARAMS(Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftedItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftedItemID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCraftComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCraftComponent_Statics::NewProp_mCraftedItemID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCraftComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCraftComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCraftComponent_Statics::ClassParams = {
		&UCraftComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCraftComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCraftComponent_Statics::PropPointers),
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

	void UCraftComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_mCraftItems(TEXT("mCraftItems"));
		static const FName Name_mCraftedItemID(TEXT("mCraftedItemID"));

		const bool bIsValid = true
			&& Name_mCraftItems == ClassReps[(int32)ENetFields_Private::mCraftItems].Property->GetFName()
			&& Name_mCraftedItemID == ClassReps[(int32)ENetFields_Private::mCraftedItemID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCraftComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCraftComponent);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCraftComponent, UCraftComponent::StaticClass, TEXT("UCraftComponent"), &Z_Registration_Info_UClass_UCraftComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCraftComponent), 774982569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_434297169(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_CraftComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
