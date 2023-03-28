// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile_Bullet.h"

// Sets default values
AProjectile_Bullet::AProjectile_Bullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

	CollisionComponent->InitSphereRadius(15.0f);

	RootComponent = CollisionComponent;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;
}

// Called when the game starts or when spawned
void AProjectile_Bullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile_Bullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile_Bullet::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

