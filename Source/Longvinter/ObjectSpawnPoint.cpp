// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectSpawnPoint.h"
#include "Character/NonPlayerActorBase.h"

// Sets default values
AObjectSpawnPoint::AObjectSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(mRoot);
	mRoot->bVisualizeComponent = true;
}

// Called when the game starts or when spawned
void AObjectSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetNetMode() == NM_DedicatedServer ||
		GetNetMode() == NM_ListenServer)
		SpawnNPA();
}

// Called every frame
void AObjectSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObjectSpawnPoint::OnNPAEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason)
{
	FTimerHandle SpawnTimerHandle;
	GetWorldTimerManager().SetTimer(SpawnTimerHandle, FTimerDelegate::CreateUObject(this, &AObjectSpawnPoint::OnSpawnNPATimerExpired), mSpawnIntervalTime, false);
}

void AObjectSpawnPoint::OnSpawnNPATimerExpired()
{
	SpawnNPA();
}

void AObjectSpawnPoint::SpawnNPA()
{
	if (IsValid(mSpawnClass))
	{
		FActorSpawnParameters	SpawnParam;

		SpawnParam.SpawnCollisionHandlingOverride =
			ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		ANonPlayerActorBase* NPA =
			GetWorld()->SpawnActor<ANonPlayerActorBase>(
				mSpawnClass,
				GetActorLocation(), GetActorRotation(),
				SpawnParam
				);

		NPA->OnEndPlay.AddDynamic(this, &AObjectSpawnPoint::OnNPAEndPlay);
	}
}

