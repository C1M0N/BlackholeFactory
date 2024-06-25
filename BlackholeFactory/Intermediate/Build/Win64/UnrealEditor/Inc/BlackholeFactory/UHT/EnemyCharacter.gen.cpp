// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackholeFactory/Public/Character/EnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}

// Begin Cross Module References
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_AAllCharacterBase();
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_AEnemyCharacter();
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_BlackholeFactory();
// End Cross Module References

// Begin Class AEnemyCharacter
void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter);
UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
{
	return AEnemyCharacter::StaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/EnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAllCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlackholeFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
	&AEnemyCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton;
}
template<> BLACKHOLEFACTORY_API UClass* StaticClass<AEnemyCharacter>()
{
	return AEnemyCharacter::StaticClass();
}
AEnemyCharacter::AEnemyCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
AEnemyCharacter::~AEnemyCharacter() {}
// End Class AEnemyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter, AEnemyCharacter::StaticClass, TEXT("AEnemyCharacter"), &Z_Registration_Info_UClass_AEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter), 3449215834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_3395512179(TEXT("/Script/BlackholeFactory"),
	Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
