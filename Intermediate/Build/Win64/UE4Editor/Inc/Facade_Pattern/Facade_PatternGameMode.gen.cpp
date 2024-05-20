// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_Pattern/Facade_PatternGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacade_PatternGameMode() {}
// Cross Module References
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AFacade_PatternGameMode_NoRegister();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AFacade_PatternGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Facade_Pattern();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AEnemigos_Facade_NoRegister();
// End Cross Module References
	void AFacade_PatternGameMode::StaticRegisterNativesAFacade_PatternGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFacade_PatternGameMode_NoRegister()
	{
		return AFacade_PatternGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFacade_PatternGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Facade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Facade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacade_PatternGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacade_PatternGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Facade_PatternGameMode.h" },
		{ "ModuleRelativePath", "Facade_PatternGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacade_PatternGameMode_Statics::NewProp_Facade_MetaData[] = {
		{ "Category", "Facade Enemigo" },
		{ "ModuleRelativePath", "Facade_PatternGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFacade_PatternGameMode_Statics::NewProp_Facade = { "Facade", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFacade_PatternGameMode, Facade), Z_Construct_UClass_AEnemigos_Facade_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFacade_PatternGameMode_Statics::NewProp_Facade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_PatternGameMode_Statics::NewProp_Facade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFacade_PatternGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFacade_PatternGameMode_Statics::NewProp_Facade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacade_PatternGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacade_PatternGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacade_PatternGameMode_Statics::ClassParams = {
		&AFacade_PatternGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFacade_PatternGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_PatternGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFacade_PatternGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_PatternGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacade_PatternGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacade_PatternGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacade_PatternGameMode, 3341443555);
	template<> FACADE_PATTERN_API UClass* StaticClass<AFacade_PatternGameMode>()
	{
		return AFacade_PatternGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacade_PatternGameMode(Z_Construct_UClass_AFacade_PatternGameMode, &AFacade_PatternGameMode::StaticClass, TEXT("/Script/Facade_Pattern"), TEXT("AFacade_PatternGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacade_PatternGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
