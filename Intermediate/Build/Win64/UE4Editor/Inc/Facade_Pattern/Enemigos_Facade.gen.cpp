// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_Pattern/Enemigos_Facade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigos_Facade() {}
// Cross Module References
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AEnemigos_Facade_NoRegister();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AEnemigos_Facade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Facade_Pattern();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AFacade_Nivel_NoRegister();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AFacade_Unity_NoRegister();
// End Cross Module References
	void AEnemigos_Facade::StaticRegisterNativesAEnemigos_Facade()
	{
	}
	UClass* Z_Construct_UClass_AEnemigos_Facade_NoRegister()
	{
		return AEnemigos_Facade::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigos_Facade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NivelActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NivelActual;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nivel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nivel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nivel;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Orden_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orden_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Orden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigos_Facade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigos_Facade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemigos_Facade.h" },
		{ "ModuleRelativePath", "Enemigos_Facade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_NivelActual_MetaData[] = {
		{ "ModuleRelativePath", "Enemigos_Facade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_NivelActual = { "NivelActual", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigos_Facade, NivelActual), Z_Construct_UClass_AFacade_Nivel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_NivelActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_NivelActual_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Nivel_Inner = { "Nivel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFacade_Unity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Nivel_MetaData[] = {
		{ "ModuleRelativePath", "Enemigos_Facade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Nivel = { "Nivel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigos_Facade, Nivel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Nivel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Nivel_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Orden_Inner = { "Orden", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Orden_MetaData[] = {
		{ "ModuleRelativePath", "Enemigos_Facade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Orden = { "Orden", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigos_Facade, Orden), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Orden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Orden_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigos_Facade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_NivelActual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Nivel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Nivel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Orden_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigos_Facade_Statics::NewProp_Orden,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigos_Facade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigos_Facade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigos_Facade_Statics::ClassParams = {
		&AEnemigos_Facade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigos_Facade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigos_Facade_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigos_Facade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigos_Facade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigos_Facade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigos_Facade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigos_Facade, 678388265);
	template<> FACADE_PATTERN_API UClass* StaticClass<AEnemigos_Facade>()
	{
		return AEnemigos_Facade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigos_Facade(Z_Construct_UClass_AEnemigos_Facade, &AEnemigos_Facade::StaticClass, TEXT("/Script/Facade_Pattern"), TEXT("AEnemigos_Facade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigos_Facade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
