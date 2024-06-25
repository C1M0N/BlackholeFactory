// Copyright Cementine Club


#include "Character/AllCharacterBase.h"

// Sets default values
AAllCharacterBase::AAllCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AAllCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

