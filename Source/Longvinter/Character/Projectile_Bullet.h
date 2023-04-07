// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/Actor.h"
#include "Projectile_Bullet.generated.h"

UCLASS()
class LONGVINTER_API AProjectile_Bullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile_Bullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FireInDirection(const FVector& ShootDirection);

	void OnDestroyTimerExpired();

	UFUNCTION()
	void OnCollision(const FHitResult& Hit);

public:
	UPROPERTY(VisibleDefaultsOnly)
	USphereComponent* mCollisionComponent;
	
	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* mProjectileMovementComponent;

	FTimerHandle mDestroyTimerHandle;

	UPROPERTY(EditAnywhere, Category = Movement)
	float mDamage;

	UPROPERTY(EditAnywhere, Category = Sound)
	USoundBase* mFireSound;
};
