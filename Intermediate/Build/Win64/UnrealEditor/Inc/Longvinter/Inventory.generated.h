// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UGameInstance;
class UInventory;
#ifdef LONGVINTER_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define LONGVINTER_Inventory_generated_h

#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_SPARSE_DATA
#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetItemTable); \
	DECLARE_FUNCTION(execGetInst);


#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetItemTable); \
	DECLARE_FUNCTION(execGetInst);


#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public:


#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory)


#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_12_PROLOG
#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_RPC_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_INCLASS \
	FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_INCLASS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Inventory_Inventory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LONGVINTER_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Longvinter_Source_Longvinter_Inventory_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
