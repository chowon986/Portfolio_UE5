// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "BlackLotus.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ABlackLotus : public ANonPlayerActorBase
{
	GENERATED_BODY()

public:
	ABlackLotus();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};