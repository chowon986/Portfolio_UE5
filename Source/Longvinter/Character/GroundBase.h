// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "GroundBase.generated.h"

UENUM(BlueprintType)
enum class EGroundType : uint8
{
	Green,
	White
};

/**
 * 
 */
UCLASS()
class LONGVINTER_API AGroundBase : public ANonPlayerActorBase
{
	GENERATED_BODY()

public:
	AGroundBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	void SetGroundType(EGroundType Type) { mGroundType = Type; }
	EGroundType GetGroundType() { return mGroundType; }

	float GetDamage() { return mDamage; }

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	EGroundType mGroundType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	float mDamage;
};
