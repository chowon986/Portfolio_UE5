// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "CampFire.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ACampFire : public ANonPlayerActorBase
{
	GENERATED_BODY()
	
public:
	ACampFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(Server, Reliable)
	void CheckDistanceFromActor();

public:
	UStaticMeshComponent* mStaticMeshComponent;
	UCapsuleComponent* mCapsuleComponent;	
	float mElapsedTime;
};
