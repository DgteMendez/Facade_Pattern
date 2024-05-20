// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

UCLASS()
class FACADE_PATTERN_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	int CantidadBombas;

public:
	ANaveEnemigaCaza();
	
	FORCEINLINE int GetCantidadBombas() const { return CantidadBombas; }

	FORCEINLINE void SetCantidadDeBombas(int _CantidadBombas) { this->CantidadBombas = _CantidadBombas; }

	//class UComponenteMovimiento1* ComponenteMovimiento1;

public:
	virtual void Tick(float DeltaTime) override;
};
