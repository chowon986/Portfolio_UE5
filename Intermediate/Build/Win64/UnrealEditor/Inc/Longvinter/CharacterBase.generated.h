// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef LONGVINTER_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define LONGVINTER_CharacterBase_generated_h

#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_SPARSE_DATA
#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_9_PROLOG
#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_RPC_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_INCLASS \
	FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Character_CharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LONGVINTER_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Longvinter_Source_Longvinter_Character_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
