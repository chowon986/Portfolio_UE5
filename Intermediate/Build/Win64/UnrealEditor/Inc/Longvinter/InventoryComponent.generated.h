// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LONGVINTER_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define LONGVINTER_InventoryComponent_generated_h

#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_SPARSE_DATA
#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_RPC_WRAPPERS \
	virtual void ServerBuyItem_Implementation(int32 ItemID); \
	virtual void ServerSellItem_Implementation(int32 ItemID); \
	virtual void ServerUseItem_Implementation(int32 ItemID); \
	virtual void ServerRemoveItem_Implementation(int32 ItemID); \
	virtual void ServerAddItem_Implementation(int32 ItemID); \
 \
	DECLARE_FUNCTION(execServerBuyItem); \
	DECLARE_FUNCTION(execServerSellItem); \
	DECLARE_FUNCTION(execServerUseItem); \
	DECLARE_FUNCTION(execServerRemoveItem); \
	DECLARE_FUNCTION(execServerAddItem); \
	DECLARE_FUNCTION(execOnRep_MK); \
	DECLARE_FUNCTION(execOnRep_Items);


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerBuyItem_Implementation(int32 ItemID); \
	virtual void ServerSellItem_Implementation(int32 ItemID); \
	virtual void ServerUseItem_Implementation(int32 ItemID); \
	virtual void ServerRemoveItem_Implementation(int32 ItemID); \
	virtual void ServerAddItem_Implementation(int32 ItemID); \
 \
	DECLARE_FUNCTION(execServerBuyItem); \
	DECLARE_FUNCTION(execServerSellItem); \
	DECLARE_FUNCTION(execServerUseItem); \
	DECLARE_FUNCTION(execServerRemoveItem); \
	DECLARE_FUNCTION(execServerAddItem); \
	DECLARE_FUNCTION(execOnRep_MK); \
	DECLARE_FUNCTION(execOnRep_Items);


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_EVENT_PARMS \
	struct InventoryComponent_eventServerAddItem_Parms \
	{ \
		int32 ItemID; \
	}; \
	struct InventoryComponent_eventServerBuyItem_Parms \
	{ \
		int32 ItemID; \
	}; \
	struct InventoryComponent_eventServerRemoveItem_Parms \
	{ \
		int32 ItemID; \
	}; \
	struct InventoryComponent_eventServerSellItem_Parms \
	{ \
		int32 ItemID; \
	}; \
	struct InventoryComponent_eventServerUseItem_Parms \
	{ \
		int32 ItemID; \
	};


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_CALLBACK_WRAPPERS
#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		mItems=NETFIELD_REP_START, \
		mMK, \
		NETFIELD_REP_END=mMK	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		mItems=NETFIELD_REP_START, \
		mMK, \
		NETFIELD_REP_END=mMK	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_10_PROLOG \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_EVENT_PARMS


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_RPC_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_CALLBACK_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_INCLASS \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_CALLBACK_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LONGVINTER_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Longvinter_Source_Longvinter_Component_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
