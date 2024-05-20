// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

UCLASS()
class FACADE_PATTERN_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	int capacidad;
	bool cargado;

public:
	ANaveEnemigaTransporte();
	
	FORCEINLINE int GetCapacidad() const { return capacidad; }
	FORCEINLINE bool GetCargado() const { return cargado; }

	FORCEINLINE void SetCapacidad(int _capacidad) { this->capacidad = _capacidad; }
	FORCEINLINE void SetCargado(bool _cargado) { this->cargado = _cargado; }

public: 
	virtual void Tick(float DeltaTime) override;
};
