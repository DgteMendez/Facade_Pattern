// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Facade_Pattern/Facade_Nivel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacade_Nivel() {}
// Cross Module References
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AFacade_Nivel_NoRegister();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AFacade_Nivel();
	FACADE_PATTERN_API UClass* Z_Construct_UClass_AFacade_Unity();
	UPackage* Z_Construct_UPackage__Script_Facade_Pattern();
// End Cross Module References
	void AFacade_Nivel::StaticRegisterNativesAFacade_Nivel()
	{
	}
	UClass* Z_Construct_UClass_AFacade_Nivel_NoRegister()
	{
		return AFacade_Nivel::StaticClass();
	}
	struct Z_Construct_UClass_AFacade_Nivel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacade_Nivel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFacade_Unity,
		(UObject* (*)())Z_Construct_UPackage__Script_Facade_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacade_Nivel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Facade_Nivel.h" },
		{ "ModuleRelativePath", "Facade_Nivel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacade_Nivel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacade_Nivel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacade_Nivel_Statics::ClassParams = {
		&AFacade_Nivel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFacade_Nivel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Nivel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacade_Nivel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacade_Nivel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacade_Nivel, 2170456030);
	template<> FACADE_PATTERN_API UClass* StaticClass<AFacade_Nivel>()
	{
		return AFacade_Nivel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacade_Nivel(Z_Construct_UClass_AFacade_Nivel, &AFacade_Nivel::StaticClass, TEXT("/Script/Facade_Pattern"), TEXT("AFacade_Nivel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacade_Nivel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
