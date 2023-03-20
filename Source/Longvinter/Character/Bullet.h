// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "Bullet.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ABullet : public ANonPlayerActorBase
{
	GENERATED_BODY()
	
public:
	ABullet();

public:
	UProjectileMovementComponent* GetBullet()	const
	{
		return mBullet;
	}

	UFUNCTION()
		void CollisionBullet(const FHitResult& Hit);

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	UProjectileMovementComponent* mBullet;
};
