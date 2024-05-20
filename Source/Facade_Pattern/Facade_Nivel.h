// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Facade_Unity.h"
#include "Facade_Nivel.generated.h"

UCLASS()
class FACADE_PATTERN_API AFacade_Nivel : public AFacade_Unity
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AFacade_Nivel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
