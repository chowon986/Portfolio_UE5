// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/LvPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLvPlayer() {}
// Cross Module References
	LONGVINTER_API UEnum* Z_Construct_UEnum_Longvinter_EPlayerState();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	LONGVINTER_API UClass* Z_Construct_UClass_ALvPlayer_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ALvPlayer();
	LONGVINTER_API UClass* Z_Construct_UClass_APlayerCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerState;
	static UEnum* EPlayerState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Longvinter_EPlayerState, Z_Construct_UPackage__Script_Longvinter(), TEXT("EPlayerState"));
		}
		return Z_Registration_Info_UEnum_EPlayerState.OuterSingleton;
	}
	template<> LONGVINTER_API UEnum* StaticEnum<EPlayerState>()
	{
		return EPlayerState_StaticEnum();
	}
	struct Z_Construct_UEnum_Longvinter_EPlayerState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Longvinter_EPlayerState_Statics::Enumerators[] = {
		{ "EPlayerState::Idle", (int64)EPlayerState::Idle },
		{ "EPlayerState::SwimmingIdle", (int64)EPlayerState::SwimmingIdle },
		{ "EPlayerState::Sit", (int64)EPlayerState::Sit },
		{ "EPlayerState::Fishing", (int64)EPlayerState::Fishing },
		{ "EPlayerState::Death", (int64)EPlayerState::Death },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Longvinter_EPlayerState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Death.Name", "EPlayerState::Death" },
		{ "Fishing.Name", "EPlayerState::Fishing" },
		{ "Idle.Name", "EPlayerState::Idle" },
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
		{ "Sit.Name", "EPlayerState::Sit" },
		{ "SwimmingIdle.Name", "EPlayerState::SwimmingIdle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Longvinter_EPlayerState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Longvinter,
		nullptr,
		"EPlayerState",
		"EPlayerState",
		Z_Construct_UEnum_Longvinter_EPlayerState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Longvinter_EPlayerState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Longvinter_EPlayerState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Longvinter_EPlayerState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Longvinter_EPlayerState()
	{
		if (!Z_Registration_Info_UEnum_EPlayerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerState.InnerSingleton, Z_Construct_UEnum_Longvinter_EPlayerState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerState.InnerSingleton;
	}
	DEFINE_FUNCTION(ALvPlayer::execClientOnFishingFinished)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientOnFishingFinished_Implementation(Z_Param_ItemID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALvPlayer::execServerSetState)
	{
		P_GET_ENUM(EPlayerState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetState_Implementation(EPlayerState(Z_Param_State));
		P_NATIVE_END;
	}
	static FName NAME_ALvPlayer_ClientOnFishingFinished = FName(TEXT("ClientOnFishingFinished"));
	void ALvPlayer::ClientOnFishingFinished(int32 ItemID)
	{
		LvPlayer_eventClientOnFishingFinished_Parms Parms;
		Parms.ItemID=ItemID;
		ProcessEvent(FindFunctionChecked(NAME_ALvPlayer_ClientOnFishingFinished),&Parms);
	}
	static FName NAME_ALvPlayer_ServerSetState = FName(TEXT("ServerSetState"));
	void ALvPlayer::ServerSetState(EPlayerState State)
	{
		LvPlayer_eventServerSetState_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_ALvPlayer_ServerSetState),&Parms);
	}
	void ALvPlayer::StaticRegisterNativesALvPlayer()
	{
		UClass* Class = ALvPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientOnFishingFinished", &ALvPlayer::execClientOnFishingFinished },
			{ "ServerSetState", &ALvPlayer::execServerSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LvPlayer_eventClientOnFishingFinished_Parms, ItemID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::NewProp_ItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALvPlayer, nullptr, "ClientOnFishingFinished", nullptr, nullptr, sizeof(LvPlayer_eventClientOnFishingFinished_Parms), Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LvPlayer_eventServerSetState_Parms, State), Z_Construct_UEnum_Longvinter_EPlayerState, METADATA_PARAMS(nullptr, 0) }; // 467600455
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALvPlayer, nullptr, "ServerSetState", nullptr, nullptr, sizeof(LvPlayer_eventServerSetState_Parms), Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALvPlayer_ServerSetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALvPlayer_ServerSetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALvPlayer);
	UClass* Z_Construct_UClass_ALvPlayer_NoRegister()
	{
		return ALvPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ALvPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCamera;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mPlayerState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCanFishing_MetaData[];
#endif
		static void NewProp_mCanFishing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mCanFishing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALvPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALvPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALvPlayer_ClientOnFishingFinished, "ClientOnFishingFinished" }, // 685044061
		{ &Z_Construct_UFunction_ALvPlayer_ServerSetState, "ServerSetState" }, // 2613808317
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/LvPlayer.h" },
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayer_Statics::NewProp_mSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALvPlayer_Statics::NewProp_mSpringArm = { "mSpringArm", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALvPlayer, mSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALvPlayer_Statics::NewProp_mSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayer_Statics::NewProp_mSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCamera = { "mCamera", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALvPlayer, mCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCamera_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALvPlayer_Statics::NewProp_mPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayer_Statics::NewProp_mPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayer" },
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALvPlayer_Statics::NewProp_mPlayerState = { "mPlayerState", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALvPlayer, mPlayerState), Z_Construct_UEnum_Longvinter_EPlayerState, METADATA_PARAMS(Z_Construct_UClass_ALvPlayer_Statics::NewProp_mPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayer_Statics::NewProp_mPlayerState_MetaData)) }; // 467600455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCanFishing_MetaData[] = {
		{ "ModuleRelativePath", "Character/LvPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCanFishing_SetBit(void* Obj)
	{
		((ALvPlayer*)Obj)->mCanFishing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCanFishing = { "mCanFishing", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALvPlayer), &Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCanFishing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCanFishing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCanFishing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALvPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALvPlayer_Statics::NewProp_mSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALvPlayer_Statics::NewProp_mPlayerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALvPlayer_Statics::NewProp_mPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALvPlayer_Statics::NewProp_mCanFishing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALvPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALvPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALvPlayer_Statics::ClassParams = {
		&ALvPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALvPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALvPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALvPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALvPlayer()
	{
		if (!Z_Registration_Info_UClass_ALvPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALvPlayer.OuterSingleton, Z_Construct_UClass_ALvPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALvPlayer.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ALvPlayer>()
	{
		return ALvPlayer::StaticClass();
	}

	void ALvPlayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_mPlayerState(TEXT("mPlayerState"));
		static const FName Name_mCanFishing(TEXT("mCanFishing"));

		const bool bIsValid = true
			&& Name_mPlayerState == ClassReps[(int32)ENetFields_Private::mPlayerState].Property->GetFName()
			&& Name_mCanFishing == ClassReps[(int32)ENetFields_Private::mCanFishing].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALvPlayer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALvPlayer);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::EnumInfo[] = {
		{ EPlayerState_StaticEnum, TEXT("EPlayerState"), &Z_Registration_Info_UEnum_EPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 467600455U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALvPlayer, ALvPlayer::StaticClass, TEXT("ALvPlayer"), &Z_Registration_Info_UClass_ALvPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALvPlayer), 3661266025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_3286612680(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
