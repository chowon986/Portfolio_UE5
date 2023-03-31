// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "FishingSpot.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API AFishingSpot : public ANonPlayerActorBase
{
	GENERATED_BODY()
	
public:
	AFishingSpot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 GetRandomFish();

	UFUNCTION(Server, Reliable)
	void ServerSetFish(const TArray<int32>& FishArray);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	TArray<int32> mFishType;
};
