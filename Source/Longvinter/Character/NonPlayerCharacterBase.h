// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "CharacterBase.h"
#include "NonPlayerCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ANonPlayerCharacterBase : public ACharacterBase
{
	GENERATED_BODY()
	
public:
	ANonPlayerCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
