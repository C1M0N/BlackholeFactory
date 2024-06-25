// Copyright Cementine Club

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AllCharacterBase.generated.h"

UCLASS(Abstract)
class BLACKHOLEFACTORY_API AAllCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAllCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
