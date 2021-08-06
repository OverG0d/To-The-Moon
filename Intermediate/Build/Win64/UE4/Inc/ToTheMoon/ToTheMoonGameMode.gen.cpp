// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToTheMoon/ToTheMoonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToTheMoonGameMode() {}
// Cross Module References
	TOTHEMOON_API UClass* Z_Construct_UClass_AToTheMoonGameMode_NoRegister();
	TOTHEMOON_API UClass* Z_Construct_UClass_AToTheMoonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ToTheMoon();
// End Cross Module References
	void AToTheMoonGameMode::StaticRegisterNativesAToTheMoonGameMode()
	{
	}
	UClass* Z_Construct_UClass_AToTheMoonGameMode_NoRegister()
	{
		return AToTheMoonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AToTheMoonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToTheMoonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToTheMoon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToTheMoonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ToTheMoonGameMode.h" },
		{ "ModuleRelativePath", "ToTheMoonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToTheMoonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToTheMoonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AToTheMoonGameMode_Statics::ClassParams = {
		&AToTheMoonGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AToTheMoonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToTheMoonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToTheMoonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AToTheMoonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AToTheMoonGameMode, 3070849999);
	template<> TOTHEMOON_API UClass* StaticClass<AToTheMoonGameMode>()
	{
		return AToTheMoonGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AToTheMoonGameMode(Z_Construct_UClass_AToTheMoonGameMode, &AToTheMoonGameMode::StaticClass, TEXT("/Script/ToTheMoon"), TEXT("AToTheMoonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToTheMoonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
