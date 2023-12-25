// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/ActionRoguelikeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionRoguelikeGameModeBase() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
// End Cross Module References
	void AActionRoguelikeGameModeBase::StaticRegisterNativesAActionRoguelikeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase_NoRegister()
	{
		return AActionRoguelikeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ActionRoguelikeGameModeBase.h" },
		{ "ModuleRelativePath", "ActionRoguelikeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionRoguelikeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::ClassParams = {
		&AActionRoguelikeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionRoguelikeGameModeBase, 1464159080);
	template<> ACTIONROGUELIKE_API UClass* StaticClass<AActionRoguelikeGameModeBase>()
	{
		return AActionRoguelikeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionRoguelikeGameModeBase(Z_Construct_UClass_AActionRoguelikeGameModeBase, &AActionRoguelikeGameModeBase::StaticClass, TEXT("/Script/ActionRoguelike"), TEXT("AActionRoguelikeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionRoguelikeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
