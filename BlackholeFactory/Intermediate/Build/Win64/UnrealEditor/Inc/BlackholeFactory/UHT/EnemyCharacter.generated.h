// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/EnemyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLACKHOLEFACTORY_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define BLACKHOLEFACTORY_EnemyCharacter_generated_h

#define FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, AAllCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlackholeFactory"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyCharacter(AEnemyCharacter&&); \
	AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter) \
	NO_API virtual ~AEnemyCharacter();


#define FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_12_PROLOG
#define FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLACKHOLEFACTORY_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Portfolio_BlackholeFactory_BlackholeFactory_Source_BlackholeFactory_Public_Character_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
