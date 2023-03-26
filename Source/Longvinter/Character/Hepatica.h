// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "Hepatica.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API AHepatica : public ANonPlayerActorBase
{
	GENERATED_BODY()

public:
	AHepatica();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UStaticMeshComponent* mStaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		UCapsuleComponent* mCapsuleComponent;
};