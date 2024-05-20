// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FACADE_PATTERN_Facade_PatternProjectile_generated_h
#error "Facade_PatternProjectile.generated.h already included, missing '#pragma once' in Facade_PatternProjectile.h"
#endif
#define FACADE_PATTERN_Facade_PatternProjectile_generated_h

#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_SPARSE_DATA
#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFacade_PatternProjectile(); \
	friend struct Z_Construct_UClass_AFacade_PatternProjectile_Statics; \
public: \
	DECLARE_CLASS(AFacade_PatternProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Facade_Pattern"), NO_API) \
	DECLARE_SERIALIZER(AFacade_PatternProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFacade_PatternProjectile(); \
	friend struct Z_Construct_UClass_AFacade_PatternProjectile_Statics; \
public: \
	DECLARE_CLASS(AFacade_PatternProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Facade_Pattern"), NO_API) \
	DECLARE_SERIALIZER(AFacade_PatternProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFacade_PatternProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFacade_PatternProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacade_PatternProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacade_PatternProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacade_PatternProjectile(AFacade_PatternProjectile&&); \
	NO_API AFacade_PatternProjectile(const AFacade_PatternProjectile&); \
public:


#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacade_PatternProjectile(AFacade_PatternProjectile&&); \
	NO_API AFacade_PatternProjectile(const AFacade_PatternProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacade_PatternProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacade_PatternProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFacade_PatternProjectile)


#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AFacade_PatternProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFacade_PatternProjectile, ProjectileMovement); }


#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_12_PROLOG
#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_SPARSE_DATA \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_RPC_WRAPPERS \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_INCLASS \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_SPARSE_DATA \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACADE_PATTERN_API UClass* StaticClass<class AFacade_PatternProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Facade_Pattern_Source_Facade_Pattern_Facade_PatternProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
