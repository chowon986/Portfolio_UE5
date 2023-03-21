// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerState : uint8;
#ifdef LONGVINTER_LvPlayer_generated_h
#error "LvPlayer.generated.h already included, missing '#pragma once' in LvPlayer.h"
#endif
#define LONGVINTER_LvPlayer_generated_h

#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_SPARSE_DATA
#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_RPC_WRAPPERS \
	virtual void ServerRemoveInventoryItem_Implementation(int32 ItemID); \
	virtual void ServerAddInventoryItem_Implementation(int32 ItemID); \
	virtual void ClientOnFishingFinished_Implementation(int32 ItemID); \
	virtual void ServerSetState_Implementation(EPlayerState State); \
 \
	DECLARE_FUNCTION(execServerRemoveInventoryItem); \
	DECLARE_FUNCTION(execServerAddInventoryItem); \
	DECLARE_FUNCTION(execClientOnFishingFinished); \
	DECLARE_FUNCTION(execServerSetState);


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRemoveInventoryItem_Implementation(int32 ItemID); \
	virtual void ServerAddInventoryItem_Implementation(int32 ItemID); \
	virtual void ClientOnFishingFinished_Implementation(int32 ItemID); \
	virtual void ServerSetState_Implementation(EPlayerState State); \
 \
	DECLARE_FUNCTION(execServerRemoveInventoryItem); \
	DECLARE_FUNCTION(execServerAddInventoryItem); \
	DECLARE_FUNCTION(execClientOnFishingFinished); \
	DECLARE_FUNCTION(execServerSetState);


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_EVENT_PARMS \
	struct LvPlayer_eventClientOnFishingFinished_Parms \
	{ \
		int32 ItemID; \
	}; \
	struct LvPlayer_eventServerAddInventoryItem_Parms \
	{ \
		int32 ItemID; \
	}; \
	struct LvPlayer_eventServerRemoveInventoryItem_Parms \
	{ \
		int32 ItemID; \
	}; \
	struct LvPlayer_eventServerSetState_Parms \
	{ \
		EPlayerState State; \
	};


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_CALLBACK_WRAPPERS
#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALvPlayer(); \
	friend struct Z_Construct_UClass_ALvPlayer_Statics; \
public: \
	DECLARE_CLASS(ALvPlayer, APlayerCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(ALvPlayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		mPlayerState=NETFIELD_REP_START, \
		mCanFishing, \
		NETFIELD_REP_END=mCanFishing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_INCLASS \
private: \
	static void StaticRegisterNativesALvPlayer(); \
	friend struct Z_Construct_UClass_ALvPlayer_Statics; \
public: \
	DECLARE_CLASS(ALvPlayer, APlayerCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(ALvPlayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		mPlayerState=NETFIELD_REP_START, \
		mCanFishing, \
		NETFIELD_REP_END=mCanFishing	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALvPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALvPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALvPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALvPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALvPlayer(ALvPlayer&&); \
	NO_API ALvPlayer(const ALvPlayer&); \
public:


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALvPlayer(ALvPlayer&&); \
	NO_API ALvPlayer(const ALvPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALvPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALvPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALvPlayer)


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_22_PROLOG \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_EVENT_PARMS


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_RPC_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_CALLBACK_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_INCLASS \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_CALLBACK_WRAPPERS \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_INCLASS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LONGVINTER_API UClass* StaticClass<class ALvPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Longvinter_Source_Longvinter_Character_LvPlayer_h


#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::Idle) \
	op(EPlayerState::SwimmingIdle) \
	op(EPlayerState::Sit) \
	op(EPlayerState::SitIdle) \
	op(EPlayerState::SitWave) \
	op(EPlayerState::Aim) \
	op(EPlayerState::Fishing) \
	op(EPlayerState::Death) 

enum class EPlayerState : uint8;
template<> LONGVINTER_API UEnum* StaticEnum<EPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
