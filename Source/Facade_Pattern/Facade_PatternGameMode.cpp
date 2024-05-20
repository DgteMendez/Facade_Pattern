// Copyright Epic Games, Inc. All Rights Reserved.

#include "Facade_PatternGameMode.h"
#include "Facade_PatternPawn.h"
#include "Enemigos_Facade.h"

AFacade_PatternGameMode::AFacade_PatternGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFacade_PatternPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}

void AFacade_PatternGameMode::BeginPlay()
{
    Facade = GetWorld()->SpawnActor<AEnemigos_Facade>(AEnemigos_Facade::StaticClass());
    if (Facade)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Facade spawn successful"));
        Facade->NivelFacil();
        Facade->NivelMedio();
        //Facade->NivelDificil();
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Facade spawn failed"));
    }
}

void AFacade_PatternGameMode::Tick(float DeltaTime)
{
}

