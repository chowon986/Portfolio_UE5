// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerCharacterBase.h"
#include "Terret.generated.h"

UENUM(BlueprintType)
enum class ETerretState : uint8
{
	Idle,
	Attack
};

UCLASS()
class LONGVINTER_API ATerret : public ANonPlayerCharacterBase
{
	GENERATED_BODY()
	
public:
	ATerret();

public:
	ETerretState GetState() { return mCurState; }
	void SetState(ETerretState State);

	virtual void Tick(float DeltaTime) override;

	virtual void PossessedBy(AController* NewController);
	virtual void UnPossessed();

	void Idle();
	void Attack();

public:
	ETerretState mCurState;
	float mElapsedTime;
	float mIntervalTime;
	float mAttackElapsedTime;
	float mAttackIntervalTime;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AProjectile_Bullet> ProjectileClass;

};
