// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VendorBase.h"
#include "BasicVendor.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ABasicVendor : public AVendorBase
{
	GENERATED_BODY()
	
public:
	ABasicVendor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
