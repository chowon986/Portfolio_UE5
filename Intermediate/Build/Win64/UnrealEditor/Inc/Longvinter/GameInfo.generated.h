// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LONGVINTER_GameInfo_generated_h
#error "GameInfo.generated.h already included, missing '#pragma once' in GameInfo.h"
#endif
#define LONGVINTER_GameInfo_generated_h

#define FID_Longvinter_Source_Longvinter_GameInfo_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemTable_Statics; \
	LONGVINTER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LONGVINTER_API UScriptStruct* StaticStruct<struct FItemTable>();

#define FID_Longvinter_Source_Longvinter_GameInfo_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBuffTable_Statics; \
	LONGVINTER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LONGVINTER_API UScriptStruct* StaticStruct<struct FBuffTable>();

#define FID_Longvinter_Source_Longvinter_GameInfo_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCraftTable_Statics; \
	LONGVINTER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LONGVINTER_API UScriptStruct* StaticStruct<struct FCraftTable>();

#define FID_Longvinter_Source_Longvinter_GameInfo_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncyclopediaTable_Statics; \
	LONGVINTER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LONGVINTER_API UScriptStruct* StaticStruct<struct FEncyclopediaTable>();

#define FID_Longvinter_Source_Longvinter_GameInfo_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestTable_Statics; \
	LONGVINTER_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LONGVINTER_API UScriptStruct* StaticStruct<struct FQuestTable>();

#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_SPARSE_DATA
#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_RPC_WRAPPERS
#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInfo(); \
	friend struct Z_Construct_UClass_UGameInfo_Statics; \
public: \
	DECLARE_CLASS(UGameInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(UGameInfo)


#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_INCLASS \
private: \
	static void StaticRegisterNativesUGameInfo(); \
	friend struct Z_Construct_UClass_UGameInfo_Statics; \
public: \
	DECLARE_CLASS(UGameInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Longvinter"), NO_API) \
	DECLARE_SERIALIZER(UGameInfo)


#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInfo(UGameInfo&&); \
	NO_API UGameInfo(const UGameInfo&); \
public:


#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInfo(UGameInfo&&); \
	NO_API UGameInfo(const UGameInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInfo)


#define FID_Longvinter_Source_Longvinter_GameInfo_h_132_PROLOG
#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_GameInfo_h_135_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_GameInfo_h_135_RPC_WRAPPERS \
	FID_Longvinter_Source_Longvinter_GameInfo_h_135_INCLASS \
	FID_Longvinter_Source_Longvinter_GameInfo_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Longvinter_Source_Longvinter_GameInfo_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Longvinter_Source_Longvinter_GameInfo_h_135_SPARSE_DATA \
	FID_Longvinter_Source_Longvinter_GameInfo_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_GameInfo_h_135_INCLASS_NO_PURE_DECLS \
	FID_Longvinter_Source_Longvinter_GameInfo_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LONGVINTER_API UClass* StaticClass<class UGameInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Longvinter_Source_Longvinter_GameInfo_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Normal) \
	op(EItemType::Food) \
	op(EItemType::Equipment) \
	op(EItemType::Decorative) \
	op(EItemType::MK) 

enum class EItemType : uint8;
template<> LONGVINTER_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EBUFFTYPE(op) \
	op(EBuffType::HP) \
	op(EBuffType::Speed) \
	op(EBuffType::Offence) \
	op(EBuffType::Defence) \
	op(EBuffType::GunAccuracy) \
	op(EBuffType::ColdResistance) \
	op(EBuffType::FishingSpeed) \
	op(EBuffType::AcquisitionRate) \
	op(EBuffType::AttackSpeed) 

enum class EBuffType : uint8;
template<> LONGVINTER_API UEnum* StaticEnum<EBuffType>();

#define FOREACH_ENUM_EQUESTTYPE(op) \
	op(EQuestType::Test) 

enum class EQuestType : uint8;
template<> LONGVINTER_API UEnum* StaticEnum<EQuestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
