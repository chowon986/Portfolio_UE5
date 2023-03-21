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
#ifdef LONGVINTER_ChickenBase_generated_h
#error "ChickenBase.generated.h already included, missing '#pragma once' in ChickenBase.h"
#endif
#define LONGVINTER_ChickenBase_generated_h

#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_SPARSE_DATA
#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_RPC_WRAPPERS \
	virtual void ServerTakeDamage_Implementation(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
 \
	DECLARE_FUNCTION(execServerTakeDamage);


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerTakeDamage_Implementation(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
 \
	DECLARE_FUNCTION(execServerTakeDamage);


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_EVENT_PARMS \
	struct ChickenBase_eventServerTakeDamage_Parms \
	{ \
		float DamageTaken; \
		FDamageEvent DamageEvent; \
		AController* EventInstigator; \
		AActor* DamageCauser; \
	};


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_CALLBACK_WRAPPERS
#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChickenBase(); \
	friend struct Z_Construct_UClass_AChickenBase_Statics; \
public: \
	DECLARE_CLASS(AChickenBase, ANonPlayerCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(AChickenBase)


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAChickenBase(); \
	friend struct Z_Construct_UClass_AChickenBase_Statics; \
public: \
	DECLARE_CLASS(AChickenBase, ANonPlayerCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(AChickenBase)


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChickenBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChickenBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChickenBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChickenBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChickenBase(AChickenBase&&); \
	NO_API AChickenBase(const AChickenBase&); \
public:


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChickenBase(AChickenBase&&); \
	NO_API AChickenBase(const AChickenBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChickenBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChickenBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChickenBase)


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_12_PROLOG \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_EVENT_PARMS


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_RPC_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_CALLBACK_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_INCLASS \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_CALLBACK_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LONGVINTER_API UClass* StaticClass<class AChickenBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Longvinter_Source_Longvinter_Character_ChickenBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
