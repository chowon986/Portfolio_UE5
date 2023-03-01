// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerCharacterBase.h"
#include "LvPlayer.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ALvPlayer : public APlayerCharacterBase
{
	GENERATED_BODY()
	
public:
	ALvPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
