// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/PlayerCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_APlayerCharacterBase();
	LONGVINTER_API UClass* Z_Construct_UClass_ACharacterBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
// End Cross Module References
	DEFINE_FUNCTION(APlayerCharacterBase::execServerNormalAttackTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerNormalAttackTest_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_APlayerCharacterBase_ServerNormalAttackTest = FName(TEXT("ServerNormalAttackTest"));
	void APlayerCharacterBase::ServerNormalAttackTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacterBase_ServerNormalAttackTest),NULL);
	}
	void APlayerCharacterBase::StaticRegisterNativesAPlayerCharacterBase()
	{
		UClass* Class = APlayerCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerNormalAttackTest", &APlayerCharacterBase::execServerNormalAttackTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacterBase_ServerNormalAttackTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacterBase_ServerNormalAttackTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/PlayerCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacterBase_ServerNormalAttackTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacterBase, nullptr, "ServerNormalAttackTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacterBase_ServerNormalAttackTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacterBase_ServerNormalAttackTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacterBase_ServerNormalAttackTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacterBase_ServerNormalAttackTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacterBase);
	UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister()
	{
		return APlayerCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacterBase_ServerNormalAttackTest, "ServerNormalAttackTest" }, // 1853134942
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PlayerCharacterBase.h" },
		{ "ModuleRelativePath", "Character/PlayerCharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams = {
		&APlayerCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacterBase()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton, Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<APlayerCharacterBase>()
	{
		return APlayerCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterBase, APlayerCharacterBase::StaticClass, TEXT("APlayerCharacterBase"), &Z_Registration_Info_UClass_APlayerCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterBase), 2437982945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_428926321(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_PlayerCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
