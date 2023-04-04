// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "ChristmasGift.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API AChristmasGift : public ANonPlayerActorBase
{
	GENERATED_BODY()

public:
	AChristmasGift();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
