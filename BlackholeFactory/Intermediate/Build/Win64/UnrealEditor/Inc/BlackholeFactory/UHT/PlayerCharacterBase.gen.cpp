// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackholeFactory/Public/PlayerCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterBase() {}

// Begin Cross Module References
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_APlayerCharacterBase();
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_BlackholeFactory();
// End Cross Module References

// Begin Class APlayerCharacterBase
void APlayerCharacterBase::StaticRegisterNativesAPlayerCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacterBase);
UClass* Z_Construct_UClass_APlayerCharacterBase_NoRegister()
{
	return APlayerCharacterBase::StaticClass();
}
struct Z_Construct_UClass_APlayerCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacterBase.h" },
		{ "ModuleRelativePath", "Public/PlayerCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BlackholeFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams = {
	&APlayerCharacterBase::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacterBase()
{
	if (!Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton, Z_Construct_UClass_APlayerCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacterBase.OuterSingleton;
}
template<> BLACKHOLEFACTORY_API UClass* StaticClass<APlayerCharacterBase>()
{
	return APlayerCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterBase);
APlayerCharacterBase::~APlayerCharacterBase() {}
// End Class APlayerCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_PlayerCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterBase, APlayerCharacterBase::StaticClass, TEXT("APlayerCharacterBase"), &Z_Registration_Info_UClass_APlayerCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterBase), 488350701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_PlayerCharacterBase_h_1063358224(TEXT("/Script/BlackholeFactory"),
	Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_PlayerCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_PlayerCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
