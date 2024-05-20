// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshNaveEnemiga"));
	MeshNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = MeshNaveEnemiga;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

