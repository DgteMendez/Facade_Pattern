// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteMovimiento1.h"

// Sets default values for this component's properties
UComponenteMovimiento1::UComponenteMovimiento1()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	MovimientoRadio = 5;
	// ...
}


// Called when the game starts
void UComponenteMovimiento1::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteMovimiento1::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Parent = GetOwner();
	if (Parent) {
		FVector PosicionActual = Parent->GetActorLocation();
		FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * 2, PosicionActual.Y + sin(PosicionActual.X / 180) * 8 * 2, PosicionActual.Z);

		Parent->SetActorLocation(NuevaPosicion);


		if (NuevaPosicion.X < -1600) {

			Parent->SetActorLocation(FVector(1500.0f, PosicionActual.Y, 250.0f));

		};
		// ...
	}
	// ...
}

