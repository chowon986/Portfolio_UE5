// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "Pumpkin.generated.h"

/**
 *
 */
UCLASS()
class LONGVINTER_API APumpkin : public ANonPlayerActorBase
{
	GENERATED_BODY()

public:
	APumpkin();

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
