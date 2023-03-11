// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "ActorBase.h"
#include "NonPlayerActorBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ANonPlayerActorBase : public AActorBase
{
	GENERATED_BODY()

public:
	ANonPlayerActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
