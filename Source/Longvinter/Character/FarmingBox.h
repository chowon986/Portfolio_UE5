// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "../Component/FarmingBoxComponent.h"
#include "NonPlayerActorBase.h"
#include "FarmingBox.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API AFarmingBox : public ANonPlayerActorBase
{
	GENERATED_BODY()

public:
	AFarmingBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFarmingBoxComponent* GetRandomBoxComponent() { return mFarmingBoxComponent;}

public:
	UStaticMeshComponent* mStaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	UCapsuleComponent* mCapsuleComponent;

	UFarmingBoxComponent* mFarmingBoxComponent;
};