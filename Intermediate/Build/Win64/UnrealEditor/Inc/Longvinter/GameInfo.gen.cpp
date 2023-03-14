// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/GameInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInfo() {}
// Cross Module References
	LONGVINTER_API UEnum* Z_Construct_UEnum_Longvinter_EItemType();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	LONGVINTER_API UEnum* Z_Construct_UEnum_Longvinter_EBuffType();
	LONGVINTER_API UEnum* Z_Construct_UEnum_Longvinter_EQuestType();
	LONGVINTER_API UScriptStruct* Z_Construct_UScriptStruct_FItemTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LONGVINTER_API UScriptStruct* Z_Construct_UScriptStruct_FBuffTable();
	LONGVINTER_API UScriptStruct* Z_Construct_UScriptStruct_FCraftTable();
	LONGVINTER_API UScriptStruct* Z_Construct_UScriptStruct_FEncyclopediaTable();
	LONGVINTER_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTable();
	LONGVINTER_API UClass* Z_Construct_UClass_UGameInfo_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_UGameInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Longvinter_EItemType, Z_Construct_UPackage__Script_Longvinter(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> LONGVINTER_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_Longvinter_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Longvinter_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Normal", (int64)EItemType::Normal },
		{ "EItemType::Food", (int64)EItemType::Food },
		{ "EItemType::Equipment", (int64)EItemType::Equipment },
		{ "EItemType::Decorative", (int64)EItemType::Decorative },
		{ "EItemType::MK", (int64)EItemType::MK },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Longvinter_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Decorative.Name", "EItemType::Decorative" },
		{ "Equipment.Name", "EItemType::Equipment" },
		{ "Food.Name", "EItemType::Food" },
		{ "MK.Name", "EItemType::MK" },
		{ "ModuleRelativePath", "GameInfo.h" },
		{ "Normal.Name", "EItemType::Normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Longvinter_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Longvinter,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_Longvinter_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Longvinter_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Longvinter_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Longvinter_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Longvinter_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Longvinter_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuffType;
	static UEnum* EBuffType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBuffType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBuffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Longvinter_EBuffType, Z_Construct_UPackage__Script_Longvinter(), TEXT("EBuffType"));
		}
		return Z_Registration_Info_UEnum_EBuffType.OuterSingleton;
	}
	template<> LONGVINTER_API UEnum* StaticEnum<EBuffType>()
	{
		return EBuffType_StaticEnum();
	}
	struct Z_Construct_UEnum_Longvinter_EBuffType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Longvinter_EBuffType_Statics::Enumerators[] = {
		{ "EBuffType::HP", (int64)EBuffType::HP },
		{ "EBuffType::Speed", (int64)EBuffType::Speed },
		{ "EBuffType::Offence", (int64)EBuffType::Offence },
		{ "EBuffType::Defence", (int64)EBuffType::Defence },
		{ "EBuffType::GunAccuracy", (int64)EBuffType::GunAccuracy },
		{ "EBuffType::ColdResistance", (int64)EBuffType::ColdResistance },
		{ "EBuffType::FishingSpeed", (int64)EBuffType::FishingSpeed },
		{ "EBuffType::AcquisitionRate", (int64)EBuffType::AcquisitionRate },
		{ "EBuffType::AttackSpeed", (int64)EBuffType::AttackSpeed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Longvinter_EBuffType_Statics::Enum_MetaDataParams[] = {
		{ "AcquisitionRate.Comment", "// ??????\n" },
		{ "AcquisitionRate.Name", "EBuffType::AcquisitionRate" },
		{ "AttackSpeed.Comment", "// ??????\n" },
		{ "AttackSpeed.Name", "EBuffType::AttackSpeed" },
		{ "BlueprintType", "true" },
		{ "ColdResistance.Comment", "// ??????\n" },
		{ "ColdResistance.Name", "EBuffType::ColdResistance" },
		{ "Defence.Comment", "// ???\xdd\xb7?\n" },
		{ "Defence.Name", "EBuffType::Defence" },
		{ "Defence.ToolTip", "???\xdd\xb7?" },
		{ "FishingSpeed.Comment", "// ??????\n" },
		{ "FishingSpeed.Name", "EBuffType::FishingSpeed" },
		{ "GunAccuracy.Comment", "// ??????\n" },
		{ "GunAccuracy.Name", "EBuffType::GunAccuracy" },
		{ "HP.Name", "EBuffType::HP" },
		{ "ModuleRelativePath", "GameInfo.h" },
		{ "Offence.Name", "EBuffType::Offence" },
		{ "Speed.Name", "EBuffType::Speed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Longvinter_EBuffType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Longvinter,
		nullptr,
		"EBuffType",
		"EBuffType",
		Z_Construct_UEnum_Longvinter_EBuffType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Longvinter_EBuffType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Longvinter_EBuffType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Longvinter_EBuffType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Longvinter_EBuffType()
	{
		if (!Z_Registration_Info_UEnum_EBuffType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuffType.InnerSingleton, Z_Construct_UEnum_Longvinter_EBuffType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBuffType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestType;
	static UEnum* EQuestType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Longvinter_EQuestType, Z_Construct_UPackage__Script_Longvinter(), TEXT("EQuestType"));
		}
		return Z_Registration_Info_UEnum_EQuestType.OuterSingleton;
	}
	template<> LONGVINTER_API UEnum* StaticEnum<EQuestType>()
	{
		return EQuestType_StaticEnum();
	}
	struct Z_Construct_UEnum_Longvinter_EQuestType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Longvinter_EQuestType_Statics::Enumerators[] = {
		{ "EQuestType::Test", (int64)EQuestType::Test },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Longvinter_EQuestType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
		{ "Test.Name", "EQuestType::Test" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Longvinter_EQuestType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Longvinter,
		nullptr,
		"EQuestType",
		"EQuestType",
		Z_Construct_UEnum_Longvinter_EQuestType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Longvinter_EQuestType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Longvinter_EQuestType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Longvinter_EQuestType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Longvinter_EQuestType()
	{
		if (!Z_Registration_Info_UEnum_EQuestType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestType.InnerSingleton, Z_Construct_UEnum_Longvinter_EQuestType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemTable;
class UScriptStruct* FItemTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemTable, Z_Construct_UPackage__Script_Longvinter(), TEXT("ItemTable"));
	}
	return Z_Registration_Info_UScriptStruct_ItemTable.OuterSingleton;
}
template<> LONGVINTER_API UScriptStruct* StaticStruct<FItemTable>()
{
	return FItemTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuffList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuffList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoolingDownDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolingDownDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TexturePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemTable, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemTable, ItemType), Z_Construct_UEnum_Longvinter_EItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemType_MetaData)) }; // 1119576774
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_BuffList_Inner = { "BuffList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_BuffList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_BuffList = { "BuffList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemTable, BuffList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_BuffList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_BuffList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_CoolingDownDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_CoolingDownDuration = { "CoolingDownDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemTable, CoolingDownDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_CoolingDownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_CoolingDownDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemTable, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_TexturePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemTable, TexturePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_TexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_TexturePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemTable, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_BuffList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_BuffList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_CoolingDownDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_TexturePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTable_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemTable",
		sizeof(FItemTable),
		alignof(FItemTable),
		Z_Construct_UScriptStruct_FItemTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemTable()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemTable.InnerSingleton, Z_Construct_UScriptStruct_FItemTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemTable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBuffTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBuffTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuffTable;
class UScriptStruct* FBuffTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuffTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuffTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuffTable, Z_Construct_UPackage__Script_Longvinter(), TEXT("BuffTable"));
	}
	return Z_Registration_Info_UScriptStruct_BuffTable.OuterSingleton;
}
template<> LONGVINTER_API UScriptStruct* StaticStruct<FBuffTable>()
{
	return FBuffTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuffTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuffTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuffTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuffTable>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_BuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_BuffType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuffTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_BuffType = { "BuffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuffTable, BuffType), Z_Construct_UEnum_Longvinter_EBuffType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_BuffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_BuffType_MetaData)) }; // 380201675
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuffTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuffTable, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuffTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_BuffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_BuffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffTable_Statics::NewProp_Amount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuffTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BuffTable",
		sizeof(FBuffTable),
		alignof(FBuffTable),
		Z_Construct_UScriptStruct_FBuffTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuffTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuffTable()
	{
		if (!Z_Registration_Info_UScriptStruct_BuffTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuffTable.InnerSingleton, Z_Construct_UScriptStruct_FBuffTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuffTable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCraftTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCraftTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CraftTable;
class UScriptStruct* FCraftTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CraftTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CraftTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCraftTable, Z_Construct_UPackage__Script_Longvinter(), TEXT("CraftTable"));
	}
	return Z_Registration_Info_UScriptStruct_CraftTable.OuterSingleton;
}
template<> LONGVINTER_API UScriptStruct* StaticStruct<FCraftTable>()
{
	return FCraftTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCraftTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredItemList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredItemList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredItemList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCraftTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCraftTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CraftTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_RequiredItemList_Inner = { "RequiredItemList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_RequiredItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CraftTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_RequiredItemList = { "RequiredItemList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftTable, RequiredItemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_RequiredItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_RequiredItemList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCraftTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_RequiredItemList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftTable_Statics::NewProp_RequiredItemList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCraftTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CraftTable",
		sizeof(FCraftTable),
		alignof(FCraftTable),
		Z_Construct_UScriptStruct_FCraftTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCraftTable()
	{
		if (!Z_Registration_Info_UScriptStruct_CraftTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CraftTable.InnerSingleton, Z_Construct_UScriptStruct_FCraftTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CraftTable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEncyclopediaTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEncyclopediaTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncyclopediaTable;
class UScriptStruct* FEncyclopediaTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncyclopediaTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncyclopediaTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncyclopediaTable, Z_Construct_UPackage__Script_Longvinter(), TEXT("EncyclopediaTable"));
	}
	return Z_Registration_Info_UScriptStruct_EncyclopediaTable.OuterSingleton;
}
template<> LONGVINTER_API UScriptStruct* StaticStruct<FEncyclopediaTable>()
{
	return FEncyclopediaTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncyclopediaTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EncyclopediaList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncyclopediaList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EncyclopediaList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncyclopediaTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EncyclopediaTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncyclopediaTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_EncyclopediaList_Inner = { "EncyclopediaList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_EncyclopediaList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EncyclopediaTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_EncyclopediaList = { "EncyclopediaList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncyclopediaTable, EncyclopediaList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_EncyclopediaList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_EncyclopediaList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_EncyclopediaList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewProp_EncyclopediaList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EncyclopediaTable",
		sizeof(FEncyclopediaTable),
		alignof(FEncyclopediaTable),
		Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncyclopediaTable()
	{
		if (!Z_Registration_Info_UScriptStruct_EncyclopediaTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncyclopediaTable.InnerSingleton, Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncyclopediaTable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuestTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTable;
class UScriptStruct* FQuestTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTable, Z_Construct_UPackage__Script_Longvinter(), TEXT("QuestTable"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTable.OuterSingleton;
}
template<> LONGVINTER_API UScriptStruct* StaticStruct<FQuestTable>()
{
	return FQuestTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TotalCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestTable" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TotalCount = { "TotalCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTable, TotalCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TotalCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TotalCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TotalCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestTable",
		sizeof(FQuestTable),
		alignof(FQuestTable),
		Z_Construct_UScriptStruct_FQuestTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTable()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTable.InnerSingleton, Z_Construct_UScriptStruct_FQuestTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTable.InnerSingleton;
	}
	void UGameInfo::StaticRegisterNativesUGameInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInfo);
	UClass* Z_Construct_UClass_UGameInfo_NoRegister()
	{
		return UGameInfo::StaticClass();
	}
	struct Z_Construct_UClass_UGameInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameInfo.h" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInfo_Statics::ClassParams = {
		&UGameInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInfo()
	{
		if (!Z_Registration_Info_UClass_UGameInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInfo.OuterSingleton, Z_Construct_UClass_UGameInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInfo.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<UGameInfo>()
	{
		return UGameInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInfo);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1119576774U) },
		{ EBuffType_StaticEnum, TEXT("EBuffType"), &Z_Registration_Info_UEnum_EBuffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 380201675U) },
		{ EQuestType_StaticEnum, TEXT("EQuestType"), &Z_Registration_Info_UEnum_EQuestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 737190705U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::ScriptStructInfo[] = {
		{ FItemTable::StaticStruct, Z_Construct_UScriptStruct_FItemTable_Statics::NewStructOps, TEXT("ItemTable"), &Z_Registration_Info_UScriptStruct_ItemTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemTable), 971107908U) },
		{ FBuffTable::StaticStruct, Z_Construct_UScriptStruct_FBuffTable_Statics::NewStructOps, TEXT("BuffTable"), &Z_Registration_Info_UScriptStruct_BuffTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuffTable), 103264110U) },
		{ FCraftTable::StaticStruct, Z_Construct_UScriptStruct_FCraftTable_Statics::NewStructOps, TEXT("CraftTable"), &Z_Registration_Info_UScriptStruct_CraftTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCraftTable), 1849153925U) },
		{ FEncyclopediaTable::StaticStruct, Z_Construct_UScriptStruct_FEncyclopediaTable_Statics::NewStructOps, TEXT("EncyclopediaTable"), &Z_Registration_Info_UScriptStruct_EncyclopediaTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncyclopediaTable), 3838308022U) },
		{ FQuestTable::StaticStruct, Z_Construct_UScriptStruct_FQuestTable_Statics::NewStructOps, TEXT("QuestTable"), &Z_Registration_Info_UScriptStruct_QuestTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTable), 749875235U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInfo, UGameInfo::StaticClass, TEXT("UGameInfo"), &Z_Registration_Info_UClass_UGameInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInfo), 2906580411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_3041258115(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_GameInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
