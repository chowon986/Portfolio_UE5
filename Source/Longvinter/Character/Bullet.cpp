// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

ABullet::ABullet()
{
	PrimaryActorTick.bCanEverTick = true;

	mBullet= CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Bullet"));

	mBullet->SetUpdatedComponent(RootComponent);

	mBullet->InitialSpeed = 1000.f;
}

void ABullet::CollisionBullet(const FHitResult& Hit)
{

}

void ABullet::BeginPlay()
{
	Super::BeginPlay();

	//mBullet->OnProjectileStop.AddDynamic(this,
	//	&ABullet::CollisionBullet);
}
