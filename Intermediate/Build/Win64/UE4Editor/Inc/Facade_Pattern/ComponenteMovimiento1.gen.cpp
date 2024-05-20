// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_Pattern/ComponenteMovimiento1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteMovimiento1() {}
// Cross Module References
	FACADE_PATTERN_API UClass* Z_Construct_UClass_UComponenteMovimiento1_NoRegister();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_UComponenteMovimiento1();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Facade_Pattern();
// End Cross Module References
	void UComponenteMovimiento1::StaticRegisterNativesUComponenteMovimiento1()
	{
	}
	UClass* Z_Construct_UClass_UComponenteMovimiento1_NoRegister()
	{
		return UComponenteMovimiento1::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteMovimiento1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteMovimiento1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteMovimiento1.h" },
		{ "ModuleRelativePath", "ComponenteMovimiento1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteMovimiento1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteMovimiento1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteMovimiento1_Statics::ClassParams = {
		&UComponenteMovimiento1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteMovimiento1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteMovimiento1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteMovimiento1, 2619176747);
	template<> FACADE_PATTERN_API UClass* StaticClass<UComponenteMovimiento1>()
	{
		return UComponenteMovimiento1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteMovimiento1(Z_Construct_UClass_UComponenteMovimiento1, &UComponenteMovimiento1::StaticClass, TEXT("/Script/Facade_Pattern"), TEXT("UComponenteMovimiento1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteMovimiento1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
