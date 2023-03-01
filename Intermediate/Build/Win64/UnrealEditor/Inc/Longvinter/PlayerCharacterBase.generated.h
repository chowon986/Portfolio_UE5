// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LONGVINTER_PlayerCharacterBase_generated_h
#error "PlayerCharacterBase.generated.h already included, missing '#pragma once' in PlayerCharacterBase.h"
#endif
#define LONGVINTER_PlayerCharacterBase_generated_h

#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_SPARSE_DATA
#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_RPC_WRAPPERS \
	virtual void ServerNormalAttackTest_Implementation(); \
 \
	DECLARE_FUNCTION(execServerNormalAttackTest);


#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerNormalAttackTest_Implementation(); \
 \
	DECLARE_FUNCTION(execServerNormalAttackTest);


#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_EVENT_PARMS
#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_CALLBACK_WRAPPERS
#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacterBase(); \
	friend struct Z_Construct_UClass_APlayerCharacterBase_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacterBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacterBase)


#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacterBase(); \
	friend struct Z_Construct_UClass_APlayerCharacterBase_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacterBase, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacterBase)


#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacterBase(APlayerCharacterBase&&); \
	NO_API APlayerCharacterBase(const APlayerCharacterBase&); \
public:


#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacterBase(APlayerCharacterBase&&); \
	NO_API APlayerCharacterBase(const APlayerCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacterBase)


#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_11_PROLOG \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_EVENT_PARMS


#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_RPC_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_CALLBACK_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_INCLASS \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_CALLBACK_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LONGVINTER_API UClass* StaticClass<class APlayerCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
