// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile_Bullet.h"
#include "CharacterBase.h"

// Sets default values
AProjectile_Bullet::AProjectile_Bullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));

	mCollisionComponent->InitSphereRadius(15.0f);

	RootComponent = mCollisionComponent;

	mProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	mProjectileMovementComponent->SetUpdatedComponent(mCollisionComponent);
	mProjectileMovementComponent->InitialSpeed = 3000.0f;
	mProjectileMovementComponent->MaxSpeed = 3000.0f;
	mProjectileMovementComponent->bRotationFollowsVelocity = true;
	mProjectileMovementComponent->bShouldBounce = true;
	mProjectileMovementComponent->Bounciness = 0.3f;
}

// Called when the game starts or when spawned
void AProjectile_Bullet::BeginPlay()
{
	Super::BeginPlay();
	
	if(GetLocalRole() == ROLE_Authority)
	mProjectileMovementComponent->OnProjectileStop.AddDynamic(this, &AProjectile_Bullet::OnCollision);
}

// Called every frame
void AProjectile_Bullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectile_Bullet::FireInDirection(const FVector& ShootDirection)
{
	mProjectileMovementComponent->Velocity = ShootDirection * mProjectileMovementComponent->InitialSpeed;

	GetWorld()->GetTimerManager().SetTimer(mDestroyTimerHandle, FTimerDelegate::CreateUObject(this, &AProjectile_Bullet::OnDestroyTimerExpired), 5.0f, false);
}

void AProjectile_Bullet::OnDestroyTimerExpired()
{
	Destroy();
}

void AProjectile_Bullet::OnCollision(const FHitResult& Hit)
{
	if (ACharacterBase* Character = Cast<ACharacterBase>(Hit.GetActor()))
	{
		Character->TakeDamage(mDamage, FDamageEvent(), GetOwner()->GetInstigatorController(), GetOwner());
	}

	Destroy();
}

