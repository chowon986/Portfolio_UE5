// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectSpawnPoint.h"
#include "Character/NonPlayerActorBase.h"
#include "Inventory/Inventory.h"
#include "LvGameInstance.h"
#include "Character/LvPlayer.h"
#include "Character/LvPlayerController.h"

// Sets default values
AObjectSpawnPoint::AObjectSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(mRoot);
	//mRoot->bVisualizeComponent = true;
	mOnceCheck = false;
}

// Called when the game starts or when spawned
void AObjectSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AObjectSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (mOnceCheck == false) 
	{
		ALvPlayerController* Controller = Cast<ALvPlayerController>(GetWorld()->GetFirstPlayerController());

		if (IsValid(Controller))
		{
			if (GetNetMode() == NM_DedicatedServer || GetNetMode() == NM_ListenServer)
			{
				mOnceCheck = true;
				SpawnNPA(Controller);
			}
		}
	}
}

void AObjectSpawnPoint::OnNPAEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason)
{
	FTimerHandle SpawnTimerHandle;
	GetWorldTimerManager().SetTimer(SpawnTimerHandle, FTimerDelegate::CreateUObject(this, &AObjectSpawnPoint::OnSpawnNPATimerExpired), mSpawnIntervalTime, false);
}

void AObjectSpawnPoint::OnSpawnNPATimerExpired()
{
	ALvPlayerController* Controller = Cast<ALvPlayerController>(GetWorld()->GetFirstPlayerController());

	if (IsValid(Controller))
	{
		if (GetNetMode() == NM_DedicatedServer || GetNetMode() == NM_ListenServer)
		{
			mOnceCheck = true;
			SpawnNPA(Controller);
		}
	}
}

void AObjectSpawnPoint::SpawnNPA(AActor* OwnerActor)
{
	if (IsValid(mSpawnClass))
	{
		FActorSpawnParameters SpawnParam;

		SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		SpawnParam.Owner = OwnerActor;

		ANonPlayerActorBase* NPA =
			GetWorld()->SpawnActor<ANonPlayerActorBase>(
				mSpawnClass,
				GetActorLocation(), GetActorRotation(),
				SpawnParam
				);

		AFishingSpot* FishingSpot = Cast<AFishingSpot>(NPA);

		NPA->OnEndPlay.AddDynamic(this, &AObjectSpawnPoint::OnNPAEndPlay);
	}
}

