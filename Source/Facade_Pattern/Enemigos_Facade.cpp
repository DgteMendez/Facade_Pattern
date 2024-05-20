// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigos_Facade.h"
#include "Facade_Nivel.h"
#include "Facade_Unity.h"

// Sets default values
AEnemigos_Facade::AEnemigos_Facade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Nivel= TArray <AFacade_Unity*>();
	Orden = TArray <FString>();
}

void AEnemigos_Facade::NivelesGen(TArray<class AFacade_Unity*> _Nivel, TArray<FString> _Orden)
{
	for (AFacade_Unity* TipoNavesNivel : _Nivel) 
	{
		TipoNavesNivel->RecibirOrden(_Orden);
	}
}

void AEnemigos_Facade::NivelFacil()
{
	Orden.Empty();
	Orden.Add("Vida");
	Orden.Add("Potencia");
	TArray<AFacade_Unity*> NivelActualizado;
	for (AFacade_Unity* Unity : Nivel)
	{
		AFacade_Nivel* Level = Cast<AFacade_Nivel>(Unity);
		if (Level)
		{
			NivelActualizado.Add(Level);
		}
	}
	NivelesGen(NivelActualizado, Orden);
}

void AEnemigos_Facade::NivelMedio()
{
	Orden.Empty();
	Orden.Add(TEXT("Vida"));
	Orden.Add(TEXT("Potencia"));
	TArray<AFacade_Unity*> NivelActualizado;
	for (AFacade_Unity* Unity : Nivel)
	{
		AFacade_Nivel* LevelC = Cast<AFacade_Nivel>(Unity);
		if (LevelC)
		{
			NivelActualizado.Add(LevelC);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Added a valid AFACADE_LEVELC to NivelActualizado"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Casting to AFACADE_LEVELC failed"));
		}
	}
	if (NivelActualizado.Num() > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("NivelActualizado is not empty"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("NivelActualizado is empty"));
	}
	NivelesGen(NivelActualizado, Orden);
}

void AEnemigos_Facade::NivelDificil()
{
	Orden.Empty();
	Orden.Add("Vida");
	Orden.Add("Vida");
	Orden.Add("Vida");
	Orden.Add("potencia");
	TArray<AFacade_Unity*> NivelActualizado;
	for (AFacade_Unity* Unity : Nivel)
	{
		AFacade_Nivel* LevelC = Cast<AFacade_Nivel>(Unity);
		if (LevelC)
		{
			NivelActualizado.Add(LevelC);
		}
	}
	NivelesGen(NivelActualizado, Orden);
}

// Called when the game starts or when spawned
void AEnemigos_Facade::BeginPlay()
{
	Super::BeginPlay();

	NivelActual = GetWorld()->SpawnActor<AFacade_Nivel>(AFacade_Nivel::StaticClass());

	Nivel.Add(NivelActual);
}

// Called every frame
void AEnemigos_Facade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

