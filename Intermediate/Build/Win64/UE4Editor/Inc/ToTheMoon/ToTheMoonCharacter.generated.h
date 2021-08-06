// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOTHEMOON_ToTheMoonCharacter_generated_h
#error "ToTheMoonCharacter.generated.h already included, missing '#pragma once' in ToTheMoonCharacter.h"
#endif
#define TOTHEMOON_ToTheMoonCharacter_generated_h

#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_SPARSE_DATA
#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_RPC_WRAPPERS
#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAToTheMoonCharacter(); \
	friend struct Z_Construct_UClass_AToTheMoonCharacter_Statics; \
public: \
	DECLARE_CLASS(AToTheMoonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToTheMoon"), NO_API) \
	DECLARE_SERIALIZER(AToTheMoonCharacter)


#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAToTheMoonCharacter(); \
	friend struct Z_Construct_UClass_AToTheMoonCharacter_Statics; \
public: \
	DECLARE_CLASS(AToTheMoonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToTheMoon"), NO_API) \
	DECLARE_SERIALIZER(AToTheMoonCharacter)


#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AToTheMoonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AToTheMoonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToTheMoonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToTheMoonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AToTheMoonCharacter(AToTheMoonCharacter&&); \
	NO_API AToTheMoonCharacter(const AToTheMoonCharacter&); \
public:


#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AToTheMoonCharacter(AToTheMoonCharacter&&); \
	NO_API AToTheMoonCharacter(const AToTheMoonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AToTheMoonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AToTheMoonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AToTheMoonCharacter)


#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AToTheMoonCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AToTheMoonCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AToTheMoonCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AToTheMoonCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AToTheMoonCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AToTheMoonCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AToTheMoonCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AToTheMoonCharacter, L_MotionController); }


#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_11_PROLOG
#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_SPARSE_DATA \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_RPC_WRAPPERS \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_INCLASS \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_SPARSE_DATA \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOTHEMOON_API UClass* StaticClass<class AToTheMoonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToTheMoon_Source_ToTheMoon_ToTheMoonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
