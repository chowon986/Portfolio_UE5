// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/LvPlayerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLvPlayerAnimInstance() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_ULvPlayerAnimInstance_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_ULvPlayerAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	LONGVINTER_API UEnum* Z_Construct_UEnum_Longvinter_EPlayerState();
// End Cross Module References
	DEFINE_FUNCTION(ULvPlayerAnimInstance::execAnimNotify_SitWaveEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_SitWaveEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULvPlayerAnimInstance::execAnimNotify_SittingEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_SittingEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULvPlayerAnimInstance::execAnimNotify_FishingEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_FishingEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULvPlayerAnimInstance::execAnimNotify_WaveEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_WaveEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULvPlayerAnimInstance::execAnimNotify_WaveStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_WaveStart();
		P_NATIVE_END;
	}
	void ULvPlayerAnimInstance::StaticRegisterNativesULvPlayerAnimInstance()
	{
		UClass* Class = ULvPlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_FishingEnd", &ULvPlayerAnimInstance::execAnimNotify_FishingEnd },
			{ "AnimNotify_SittingEnd", &ULvPlayerAnimInstance::execAnimNotify_SittingEnd },
			{ "AnimNotify_SitWaveEnd", &ULvPlayerAnimInstance::execAnimNotify_SitWaveEnd },
			{ "AnimNotify_WaveEnd", &ULvPlayerAnimInstance::execAnimNotify_WaveEnd },
			{ "AnimNotify_WaveStart", &ULvPlayerAnimInstance::execAnimNotify_WaveStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_FishingEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_FishingEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_FishingEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULvPlayerAnimInstance, nullptr, "AnimNotify_FishingEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_FishingEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_FishingEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_FishingEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_FishingEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SittingEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SittingEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SittingEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULvPlayerAnimInstance, nullptr, "AnimNotify_SittingEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SittingEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SittingEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SittingEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SittingEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SitWaveEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SitWaveEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SitWaveEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULvPlayerAnimInstance, nullptr, "AnimNotify_SitWaveEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SitWaveEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SitWaveEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SitWaveEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SitWaveEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULvPlayerAnimInstance, nullptr, "AnimNotify_WaveEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULvPlayerAnimInstance, nullptr, "AnimNotify_WaveStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULvPlayerAnimInstance);
	UClass* Z_Construct_UClass_ULvPlayerAnimInstance_NoRegister()
	{
		return ULvPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULvPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpeedRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mSpeedRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMove_MetaData[];
#endif
		static void NewProp_mMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSit_MetaData[];
#endif
		static void NewProp_mSit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mSit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mWaveMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mWaveMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSittingWaveMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mSittingWaveMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSawAimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mSawAimMontage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mPlayerState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mFinishFishing_MetaData[];
#endif
		static void NewProp_mFinishFishing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mFinishFishing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULvPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULvPlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_FishingEnd, "AnimNotify_FishingEnd" }, // 493892488
		{ &Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SittingEnd, "AnimNotify_SittingEnd" }, // 2562757647
		{ &Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_SitWaveEnd, "AnimNotify_SitWaveEnd" }, // 4282883524
		{ &Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveEnd, "AnimNotify_WaveEnd" }, // 257587251
		{ &Z_Construct_UFunction_ULvPlayerAnimInstance_AnimNotify_WaveStart, "AnimNotify_WaveStart" }, // 336478372
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/LvPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSpeedRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayerAnimInstance" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSpeedRatio = { "mSpeedRatio", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvPlayerAnimInstance, mSpeedRatio), METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSpeedRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSpeedRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayerAnimInstance" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mMove_SetBit(void* Obj)
	{
		((ULvPlayerAnimInstance*)Obj)->mMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mMove = { "mMove", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULvPlayerAnimInstance), &Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayerAnimInstance" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSit_SetBit(void* Obj)
	{
		((ULvPlayerAnimInstance*)Obj)->mSit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSit = { "mSit", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULvPlayerAnimInstance), &Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mWaveMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayerAnimInstance" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mWaveMontage = { "mWaveMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvPlayerAnimInstance, mWaveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mWaveMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mWaveMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSittingWaveMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayerAnimInstance" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSittingWaveMontage = { "mSittingWaveMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvPlayerAnimInstance, mSittingWaveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSittingWaveMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSittingWaveMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSawAimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayerAnimInstance" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSawAimMontage = { "mSawAimMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvPlayerAnimInstance, mSawAimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSawAimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSawAimMontage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayerAnimInstance" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mPlayerState = { "mPlayerState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvPlayerAnimInstance, mPlayerState), Z_Construct_UEnum_Longvinter_EPlayerState, METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mPlayerState_MetaData)) }; // 3494842403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mFinishFishing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LvPlayerAnimInstance" },
		{ "ModuleRelativePath", "Character/LvPlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mFinishFishing_SetBit(void* Obj)
	{
		((ULvPlayerAnimInstance*)Obj)->mFinishFishing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mFinishFishing = { "mFinishFishing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULvPlayerAnimInstance), &Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mFinishFishing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mFinishFishing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mFinishFishing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULvPlayerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSpeedRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mWaveMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSittingWaveMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mSawAimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mPlayerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvPlayerAnimInstance_Statics::NewProp_mFinishFishing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULvPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULvPlayerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULvPlayerAnimInstance_Statics::ClassParams = {
		&ULvPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULvPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULvPlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULvPlayerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_ULvPlayerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULvPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_ULvPlayerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULvPlayerAnimInstance.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<ULvPlayerAnimInstance>()
	{
		return ULvPlayerAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULvPlayerAnimInstance);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULvPlayerAnimInstance, ULvPlayerAnimInstance::StaticClass, TEXT("ULvPlayerAnimInstance"), &Z_Registration_Info_UClass_ULvPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULvPlayerAnimInstance), 4232233594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerAnimInstance_h_3330243156(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_LvPlayerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
