// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "Enemigos_Facade.generated.h"

UCLASS()
class FACADE_PATTERN_API AEnemigos_Facade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigos_Facade();

public:

	UPROPERTY()
	class AFacade_Nivel* NivelActual;

	UPROPERTY()
	TArray<class AFacade_Unity*> Nivel;

	UPROPERTY()
	TArray <FString> Orden;

	void NivelesGen(TArray<class AFacade_Unity*> _Nivel, TArray<FString> _Orden);

	void NivelFacil();
	void NivelMedio();
	void NivelDificil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
