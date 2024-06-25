// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackholeFactory/Public/Character/AllCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAllCharacterBase() {}

// Begin Cross Module References
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_AAllCharacterBase();
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_AAllCharacterBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlackholeFactory();
// End Cross Module References

// Begin Class AAllCharacterBase
void AAllCharacterBase::StaticRegisterNativesAAllCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAllCharacterBase);
UClass* Z_Construct_UClass_AAllCharacterBase_NoRegister()
{
	return AAllCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AAllCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AllCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/AllCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/AllCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAllCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAllCharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAllCharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAllCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAllCharacterBase_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAllCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAllCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BlackholeFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAllCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAllCharacterBase_Statics::ClassParams = {
	&AAllCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAllCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAllCharacterBase_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAllCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAllCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAllCharacterBase()
{
	if (!Z_Registration_Info_UClass_AAllCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAllCharacterBase.OuterSingleton, Z_Construct_UClass_AAllCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAllCharacterBase.OuterSingleton;
}
template<> BLACKHOLEFACTORY_API UClass* StaticClass<AAllCharacterBase>()
{
	return AAllCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAllCharacterBase);
AAllCharacterBase::~AAllCharacterBase() {}
// End Class AAllCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_AllCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAllCharacterBase, AAllCharacterBase::StaticClass, TEXT("AAllCharacterBase"), &Z_Registration_Info_UClass_AAllCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAllCharacterBase), 1654449663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_AllCharacterBase_h_1798581023(TEXT("/Script/BlackholeFactory"),
	Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_AllCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_AllCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
