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
#ifdef TOTHEMOON_ToTheMoonProjectile_generated_h
#error "ToTheMoonProjectile.generated.h already included, missing '#pragma once' in ToTheMoonProjectile.h"
#endif
#define TOTHEMOON_ToTheMoonProjectile_generated_h

#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_SPARSE_DATA
#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToTheMoonProjectile(); \
	friend struct Z_Construct_UClass_AToTheMoonProjectile_Statics; \
public: \
	DECLARE_CLASS(AToTheMoonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToTheMoon"), NO_API) \
	DECLARE_SERIALIZER(AToTheMoonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAToTheMoonProjectile(); \
	friend struct Z_Construct_UClass_AToTheMoonProjectile_Statics; \
public: \
	DECLARE_CLASS(AToTheMoonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToTheMoon"), NO_API) \
	DECLARE_SERIALIZER(AToTheMoonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AToTheMoonProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AToTheMoonProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToTheMoonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToTheMoonProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AToTheMoonProjectile(AToTheMoonProjectile&&); \
	NO_API AToTheMoonProjectile(const AToTheMoonProjectile&); \
public:


#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AToTheMoonProjectile(AToTheMoonProjectile&&); \
	NO_API AToTheMoonProjectile(const AToTheMoonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToTheMoonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToTheMoonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AToTheMoonProjectile)


#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AToTheMoonProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AToTheMoonProjectile, ProjectileMovement); }


#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_9_PROLOG
#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_SPARSE_DATA \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_RPC_WRAPPERS \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_INCLASS \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_SPARSE_DATA \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOTHEMOON_API UClass* StaticClass<class AToTheMoonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToTheMoon_Source_ToTheMoon_ToTheMoonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
