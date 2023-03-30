// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmingBox.h"
#include "../LvGameInstance.h"
#include "LvPlayer.h"
#include "LvPlayerController.h"

AFarmingBox::AFarmingBox()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Container_SM_Container_mo.Container_SM_Container_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}

	SetRootComponent(mStaticMeshComponent);

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("NPA"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(300.f);
	mCapsuleComponent->SetCapsuleRadius(100.f);

	mFarmingBoxComponent = CreateDefaultSubobject<UFarmingBoxComponent>(TEXT("FarmingBox"));
	mFarmingBoxComponent->SetIsReplicated(true);
	mOnceCheck = false;
}

void AFarmingBox::BeginPlay()
{
	Super::BeginPlay();
}

void AFarmingBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ALvPlayerController* PlayerController = Cast<ALvPlayerController>(GetWorld()->GetFirstPlayerController());

	if (IsValid(PlayerController))
	{
		UMainHUDBase* MainHUD = Cast<UMainHUDBase>(PlayerController->GetMainHUD());

		if (IsValid(MainHUD))
		{
			URandomBoxBase* RandomBoxWidget = Cast<URandomBoxBase>(MainHUD->GetRandomBoxWidget());
			
			if (IsValid(RandomBoxWidget))
			{
				if (false == RandomBoxWidget->IsVisible() && mFarmingBoxComponent->GetItems().Num() <= 0 && false == mOnceCheck)
				{
					mOnceCheck = true;
					ServerSetDestroyTimer();
				}
			}
		}
	}
}

UFarmingBoxComponent* AFarmingBox::GetRandomBoxComponent()
{
	return mFarmingBoxComponent;
}

void AFarmingBox::ServerOnDestroyTimerExpired_Implementation()
{
	Destroy();
	GetWorldTimerManager().ClearTimer(DestroyTimerHandle);
	DestroyTimerHandle.Invalidate();
}

void AFarmingBox::ServerSetDestroyTimer_Implementation()
{
	if (DestroyTimerHandle.IsValid() == false)
	{
		int32 Time = 2;
		GetWorldTimerManager().SetTimer(DestroyTimerHandle, FTimerDelegate::CreateUObject(this, &AFarmingBox::ServerOnDestroyTimerExpired), Time, false);
	}
}
