// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Longvinter/Character/ChickenBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChickenBase() {}
// Cross Module References
	LONGVINTER_API UClass* Z_Construct_UClass_AChickenBase_NoRegister();
	LONGVINTER_API UClass* Z_Construct_UClass_AChickenBase();
	LONGVINTER_API UClass* Z_Construct_UClass_ANonPlayerCharacterBase();
	UPackage* Z_Construct_UPackage__Script_Longvinter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChickenBase::execServerTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageTaken);
		P_GET_STRUCT(FDamageEvent,Z_Param_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerTakeDamage_Implementation(Z_Param_DamageTaken,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	static FName NAME_AChickenBase_ServerTakeDamage = FName(TEXT("ServerTakeDamage"));
	void AChickenBase::ServerTakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
	{
		ChickenBase_eventServerTakeDamage_Parms Parms;
		Parms.DamageTaken=DamageTaken;
		Parms.DamageEvent=DamageEvent;
		Parms.EventInstigator=EventInstigator;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AChickenBase_ServerTakeDamage),&Parms);
	}
	void AChickenBase::StaticRegisterNativesAChickenBase()
	{
		UClass* Class = AChickenBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerTakeDamage", &AChickenBase::execServerTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTaken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChickenBase_eventServerTakeDamage_Parms, DamageTaken), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChickenBase_eventServerTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageEvent_MetaData)) }; // 298187077
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChickenBase_eventServerTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChickenBase_eventServerTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageTaken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_EventInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/ChickenBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChickenBase, nullptr, "ServerTakeDamage", nullptr, nullptr, sizeof(ChickenBase_eventServerTakeDamage_Parms), Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChickenBase_ServerTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChickenBase_ServerTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChickenBase);
	UClass* Z_Construct_UClass_AChickenBase_NoRegister()
	{
		return AChickenBase::StaticClass();
	}
	struct Z_Construct_UClass_AChickenBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChickenBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANonPlayerCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Longvinter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChickenBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChickenBase_ServerTakeDamage, "ServerTakeDamage" }, // 2283876697
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChickenBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ChickenBase.h" },
		{ "ModuleRelativePath", "Character/ChickenBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChickenBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChickenBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChickenBase_Statics::ClassParams = {
		&AChickenBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChickenBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChickenBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChickenBase()
	{
		if (!Z_Registration_Info_UClass_AChickenBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChickenBase.OuterSingleton, Z_Construct_UClass_AChickenBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChickenBase.OuterSingleton;
	}
	template<> LONGVINTER_API UClass* StaticClass<AChickenBase>()
	{
		return AChickenBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChickenBase);
	struct Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChickenBase, AChickenBase::StaticClass, TEXT("AChickenBase"), &Z_Registration_Info_UClass_AChickenBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChickenBase), 2942394999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_1862533573(TEXT("/Script/Longvinter"),
		Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Longvinter_Source_Longvinter_Character_ChickenBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
