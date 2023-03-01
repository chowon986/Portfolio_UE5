// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayer.h"

ALvPlayer::ALvPlayer()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	PlayerAsset(TEXT("SkeletalMesh'/Game/LV_Character/LV_Character01.LV_Character01'"));

	if (PlayerAsset.Succeeded())
		GetMesh()->SetSkeletalMesh(PlayerAsset.Object);

	GetMesh()->SetRelativeLocation(FVector(0.0, 0.0, -88.0));
	GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));
}

void ALvPlayer::BeginPlay()
{
	Super::BeginPlay();
}

void ALvPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
