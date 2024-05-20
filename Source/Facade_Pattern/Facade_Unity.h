// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Facade_Unity.generated.h"

UCLASS()
class FACADE_PATTERN_API AFacade_Unity : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacade_Unity();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void CrearVida()const;
	void ModificarMovimiento();
	void Destruir();

public:
	void RecibirOrden(const TArray<FString>& _Orden);
	void CrearOrden(const FString& _Orden);

};
