// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFire.h"
#include "LvPlayer.h"

ACampFire::ACampFire()
{
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/CampFire_SM_CampfireLogs_mo.CampFire_SM_CampfireLogs_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}

	SetRootComponent(mStaticMeshComponent);

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("CampFire"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(100.f);
	mCapsuleComponent->SetCapsuleRadius(100.f);

	
}

void ACampFire::BeginPlay()
{
	Super::BeginPlay();
}

void ACampFire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	mElapsedTime += DeltaTime;

	if (mElapsedTime > 2.f)
	{
		mElapsedTime = 0.f;

		ServerCheckDistanceFromActor();
	}
}

void ACampFire::ServerCheckDistanceFromActor_Implementation()
{
	FCollisionQueryParams	param(NAME_None, false, this);

	TArray<FOverlapResult>	ResultMinusHPArray;
	TArray<FOverlapResult>	ResulPlusHPtArray;

	bool CollisionMinusHPEnable = GetWorld()->OverlapMultiByChannel(ResultMinusHPArray,
		GetActorLocation(), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel8,
		FCollisionShape::MakeSphere(150),
		param);

	bool CollisionPlusHPEnable = GetWorld()->OverlapMultiByChannel(ResulPlusHPtArray,
		GetActorLocation(), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel8,
		FCollisionShape::MakeSphere(250),
		param);

#if ENABLE_DRAW_DEBUG
	FColor	DrawMinusHPColor = CollisionMinusHPEnable ? FColor::Red : FColor::Green;

	DrawDebugSphere(GetWorld(), GetActorLocation(),
		150, 20,
		DrawMinusHPColor, false, 0.3f);

	FColor	DrawPlusHPColor = CollisionPlusHPEnable ? FColor::Red : FColor::Blue;

	DrawDebugSphere(GetWorld(), GetActorLocation(),
		250, 20,
		DrawPlusHPColor, false, 0.3f);

#endif

	if (CollisionMinusHPEnable)
	{
		int Range = ResultMinusHPArray.Num();
		for (int i = 0; i < Range; i++)
		{
			ALvPlayer* Player = Cast<ALvPlayer>(ResultMinusHPArray[i].GetActor());
			if (IsValid(Player))
			{
				if(Player->GetCurrentHealth() > 0)
					Player->ServerAttack(Player, 1.f);
			}
		}
	}
	else if (CollisionPlusHPEnable)
	{
		int Range = ResulPlusHPtArray.Num();
		for (int i = 0; i < Range; i++)
		{
			ALvPlayer* Player = Cast<ALvPlayer>(ResulPlusHPtArray[i].GetActor());
			if (IsValid(Player))
			{
				Player->ServerAttack(Player, -1.f);
			}
		}
	}
}