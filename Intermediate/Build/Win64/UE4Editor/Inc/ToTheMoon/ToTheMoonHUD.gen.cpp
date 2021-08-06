// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToTheMoon/ToTheMoonHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToTheMoonHUD() {}
// Cross Module References
	TOTHEMOON_API UClass* Z_Construct_UClass_AToTheMoonHUD_NoRegister();
	TOTHEMOON_API UClass* Z_Construct_UClass_AToTheMoonHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ToTheMoon();
// End Cross Module References
	void AToTheMoonHUD::StaticRegisterNativesAToTheMoonHUD()
	{
	}
	UClass* Z_Construct_UClass_AToTheMoonHUD_NoRegister()
	{
		return AToTheMoonHUD::StaticClass();
	}
	struct Z_Construct_UClass_AToTheMoonHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToTheMoonHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ToTheMoon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToTheMoonHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ToTheMoonHUD.h" },
		{ "ModuleRelativePath", "ToTheMoonHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToTheMoonHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToTheMoonHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AToTheMoonHUD_Statics::ClassParams = {
		&AToTheMoonHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AToTheMoonHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToTheMoonHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToTheMoonHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AToTheMoonHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AToTheMoonHUD, 787441248);
	template<> TOTHEMOON_API UClass* StaticClass<AToTheMoonHUD>()
	{
		return AToTheMoonHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AToTheMoonHUD(Z_Construct_UClass_AToTheMoonHUD, &AToTheMoonHUD::StaticClass, TEXT("/Script/ToTheMoon"), TEXT("AToTheMoonHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToTheMoonHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
