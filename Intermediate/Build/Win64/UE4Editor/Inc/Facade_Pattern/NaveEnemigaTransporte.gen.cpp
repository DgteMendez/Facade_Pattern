// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_Pattern/NaveEnemigaTransporte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaTransporte() {}
// Cross Module References
	FACADE_PATTERN_API UClass* Z_Construct_UClass_ANaveEnemigaTransporte_NoRegister();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_ANaveEnemigaTransporte();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Facade_Pattern();
// End Cross Module References
	void ANaveEnemigaTransporte::StaticRegisterNativesANaveEnemigaTransporte()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaTransporte_NoRegister()
	{
		return ANaveEnemigaTransporte::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaTransporte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaTransporte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaTransporte_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaTransporte.h" },
		{ "ModuleRelativePath", "NaveEnemigaTransporte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaTransporte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaTransporte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaTransporte_Statics::ClassParams = {
		&ANaveEnemigaTransporte::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaTransporte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaTransporte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaTransporte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaTransporte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaTransporte, 1104532238);
	template<> FACADE_PATTERN_API UClass* StaticClass<ANaveEnemigaTransporte>()
	{
		return ANaveEnemigaTransporte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaTransporte(Z_Construct_UClass_ANaveEnemigaTransporte, &ANaveEnemigaTransporte::StaticClass, TEXT("/Script/Facade_Pattern"), TEXT("ANaveEnemigaTransporte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaTransporte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
