// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Component/InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryComponent::execServerBuyItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBuyItem_Implementation(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execServerSellItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSellItem_Implementation(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execServerUseItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUseItem_Implementation(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execServerRemoveItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRemoveItem_Implementation(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execServerAddItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerAddItem_Implementation(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_MK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_Items)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Items();
		P_NATIVE_END;
	}
	static FName NAME_UInventoryComponent_ServerAddItem = FName(TEXT("ServerAddItem"));
	void UInventoryComponent::ServerAddItem(int32 ItemID)
	{
		InventoryComponent_eventServerAddItem_Parms Parms;
		Parms.ItemID=ItemID;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerAddItem),&Parms);
	}
	static FName NAME_UInventoryComponent_ServerBuyItem = FName(TEXT("ServerBuyItem"));
	void UInventoryComponent::ServerBuyItem(int32 ItemID)
	{
		InventoryComponent_eventServerBuyItem_Parms Parms;
		Parms.ItemID=ItemID;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerBuyItem),&Parms);
	}
	static FName NAME_UInventoryComponent_ServerRemoveItem = FName(TEXT("ServerRemoveItem"));
	void UInventoryComponent::ServerRemoveItem(int32 ItemID)
	{
		InventoryComponent_eventServerRemoveItem_Parms Parms;
		Parms.ItemID=ItemID;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerRemoveItem),&Parms);
	}
	static FName NAME_UInventoryComponent_ServerSellItem = FName(TEXT("ServerSellItem"));
	void UInventoryComponent::ServerSellItem(int32 ItemID)
	{
		InventoryComponent_eventServerSellItem_Parms Parms;
		Parms.ItemID=ItemID;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerSellItem),&Parms);
	}
	static FName NAME_UInventoryComponent_ServerUseItem = FName(TEXT("ServerUseItem"));
	void UInventoryComponent::ServerUseItem(int32 ItemID)
	{
		InventoryComponent_eventServerUseItem_Parms Parms;
		Parms.ItemID=ItemID;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerUseItem),&Parms);
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Items", &UInventoryComponent::execOnRep_Items },
			{ "OnRep_MK", &UInventoryComponent::execOnRep_MK },
			{ "ServerAddItem", &UInventoryComponent::execServerAddItem },
			{ "ServerBuyItem", &UInventoryComponent::execServerBuyItem },
			{ "ServerRemoveItem", &UInventoryComponent::execServerRemoveItem },
			{ "ServerSellItem", &UInventoryComponent::execServerSellItem },
			{ "ServerUseItem", &UInventoryComponent::execServerUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_Items", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_Items()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_Items_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_MK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_MK_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_MK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_MK", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_MK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_MK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_MK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_MK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventServerAddItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerAddItem", nullptr, nullptr, sizeof(InventoryComponent_eventServerAddItem_Parms), Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventServerBuyItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerBuyItem", nullptr, nullptr, sizeof(InventoryComponent_eventServerBuyItem_Parms), Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerBuyItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerBuyItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventServerRemoveItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerRemoveItem", nullptr, nullptr, sizeof(InventoryComponent_eventServerRemoveItem_Parms), Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventServerSellItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerSellItem", nullptr, nullptr, sizeof(InventoryComponent_eventServerSellItem_Parms), Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerSellItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerSellItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventServerUseItem_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerUseItem", nullptr, nullptr, sizeof(InventoryComponent_eventServerUseItem_Parms), Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerUseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerUseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMK_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mMK;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_Items, "OnRep_Items" }, // 712357966
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_MK, "OnRep_MK" }, // 2072675966
		{ &Z_Construct_UFunction_UInventoryComponent_ServerAddItem, "ServerAddItem" }, // 1934218967
		{ &Z_Construct_UFunction_UInventoryComponent_ServerBuyItem, "ServerBuyItem" }, // 324592487
		{ &Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem, "ServerRemoveItem" }, // 1648228272
		{ &Z_Construct_UFunction_UInventoryComponent_ServerSellItem, "ServerSellItem" }, // 2734385970
		{ &Z_Construct_UFunction_UInventoryComponent_ServerUseItem, "ServerUseItem" }, // 1803677378
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/InventoryComponent.h" },
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mItems_Inner = { "mItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mItems_MetaData[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mItems = { "mItems", "OnRep_Items", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, mItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mMK_MetaData[] = {
		{ "ModuleRelativePath", "Component/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mMK = { "mMK", "OnRep_MK", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, mMK), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mMK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mMK_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_mMK,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}

	void UInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_mItems(TEXT("mItems"));
		static const FName Name_mMK(TEXT("mMK"));

		const bool bIsValid = true
			&& Name_mItems == ClassReps[(int32)ENetFields_Private::mItems].Property->GetFName()
			&& Name_mMK == ClassReps[(int32)ENetFields_Private::mMK].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 850648288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_3404251536(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
