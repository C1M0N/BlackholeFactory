// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackholeFactory/Public/Game/BhFGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBhFGameModeBase() {}

// Begin Cross Module References
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_ABhFGameModeBase();
BLACKHOLEFACTORY_API UClass* Z_Construct_UClass_ABhFGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BlackholeFactory();
// End Cross Module References

// Begin Class ABhFGameModeBase
void ABhFGameModeBase::StaticRegisterNativesABhFGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABhFGameModeBase);
UClass* Z_Construct_UClass_ABhFGameModeBase_NoRegister()
{
	return ABhFGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABhFGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/BhFGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Game/BhFGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABhFGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABhFGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BlackholeFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABhFGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABhFGameModeBase_Statics::ClassParams = {
	&ABhFGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABhFGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABhFGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABhFGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABhFGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABhFGameModeBase.OuterSingleton, Z_Construct_UClass_ABhFGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABhFGameModeBase.OuterSingleton;
}
template<> BLACKHOLEFACTORY_API UClass* StaticClass<ABhFGameModeBase>()
{
	return ABhFGameModeBase::StaticClass();
}
ABhFGameModeBase::ABhFGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABhFGameModeBase);
ABhFGameModeBase::~ABhFGameModeBase() {}
// End Class ABhFGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Game_BhFGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABhFGameModeBase, ABhFGameModeBase::StaticClass, TEXT("ABhFGameModeBase"), &Z_Registration_Info_UClass_ABhFGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABhFGameModeBase), 4126492008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Game_BhFGameModeBase_h_2060609757(TEXT("/Script/BlackholeFactory"),
	Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Game_BhFGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Game_BhFGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
