// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Facade_PatternGameMode.generated.h"

UCLASS(MinimalAPI)
class AFacade_PatternGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFacade_PatternGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Facade Enemigo")
	class AEnemigos_Facade* Facade;
};



