// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NonPlayerCharacterBase.h"
#include "ChickenBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API AChickenBase : public ANonPlayerCharacterBase
{
	GENERATED_BODY()	

public:
	AChickenBase();

	UFUNCTION(Server, Reliable)
	void ServerTakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
};
