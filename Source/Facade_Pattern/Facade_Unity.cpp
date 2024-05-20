// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade_Unity.h"
#include "NaveEnemigaCaza.h"

// Sets default values
AFacade_Unity::AFacade_Unity()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacade_Unity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacade_Unity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacade_Unity::CrearVida() const
{
	FVector SpawnLocation = FVector(1800.0f, 0.0f, 214.0f); // Define la ubicación de spawn
	FRotator SpawnRotation = FRotator(0.0f, 180.0f, 0.0f); // Define la rotación de spawn

	for (int i = 0; i < 5; i++)
	{
		SpawnLocation = FVector(0.0f, 0.0f, 0.0f);
		SpawnLocation.X = FMath::RandRange(-0.0f, 1800.0f);
		SpawnLocation.Y = FMath::RandRange(500.0f, 1000.0f);
		SpawnLocation.Z = FMath::RandRange(0.0f, 1000.0f);

		ANaveEnemigaCaza* NewNave = GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass(), SpawnLocation, SpawnRotation);

		if (NewNave)
		{
			// El spawn fue exitoso
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Se ha spawnado una nave enemiga básica"));
		}
		else
		{
			// Hubo un error al spawnear
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo spawnear una nave enemiga básica"));
		}
	}
}

void AFacade_Unity::ModificarMovimiento()
{
}

void AFacade_Unity::Destruir()
{
}

void AFacade_Unity::RecibirOrden(const TArray<FString>& _Orden)
{
	for (const FString& Orden : _Orden)
	{
		CrearOrden(Orden);
	}
}

void AFacade_Unity::CrearOrden(const FString& _Orden)
{
	if (_Orden.Equals("Vida"))
	{
		CrearVida();
	}
	else if (_Orden.Equals("Potencia"))
	{
		ModificarMovimiento();

	}
}

