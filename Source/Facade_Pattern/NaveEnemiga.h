// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class FACADE_PATTERN_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:

	UStaticMeshComponent* MeshNaveEnemiga;
	float Resistencia;
	float Velocidad;

public:

	FORCEINLINE float GetResistencia() const { return Resistencia; }
	FORCEINLINE float GetVelocidad() const { return Velocidad; }

	FORCEINLINE void SetResistencia(float NuevaResistencia) { Resistencia = NuevaResistencia; }
	FORCEINLINE void SetVelocidad(float NuevaVelocidad) { Velocidad = NuevaVelocidad; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void Evento(const FString& Evento);
	
public:


};
