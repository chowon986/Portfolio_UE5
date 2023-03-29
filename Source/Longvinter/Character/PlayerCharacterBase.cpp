// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterBase.h"
#include "LvPlayerAnimInstance.h"

APlayerCharacterBase::APlayerCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	mMoveDir = 0.f;
}

void APlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	mAnimInst = Cast<ULvPlayerAnimInstance>(GetMesh()->GetAnimInstance());

}

void APlayerCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction<APlayerCharacterBase>(TEXT("NormalAttackTest"), EInputEvent::IE_Pressed, this, &APlayerCharacterBase::ServerNormalAttackTest);
}

void APlayerCharacterBase::ServerNormalAttackTest_Implementation()
{
	FVector	StartLocation = GetActorLocation() +
		GetActorForwardVector() * 30.f;
	FVector	EndLocation = StartLocation +
		GetActorForwardVector() * 100.f;

	FCollisionQueryParams	param(NAME_None, false, this);

	TArray<FHitResult>	CollisionResult;
	bool CollisionEnable = GetWorld()->SweepMultiByChannel(
		CollisionResult, StartLocation,
		EndLocation, FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel3,
		FCollisionShape::MakeSphere(50.f),
		param);

#if ENABLE_DRAW_DEBUG

	FColor	DrawColor = CollisionEnable ? FColor::Red : FColor::Green;

	DrawDebugCapsule(GetWorld(), (StartLocation + EndLocation) / 2.f,
		100.f / 2.f,
		50.f,
		FRotationMatrix::MakeFromZ(GetActorForwardVector()).ToQuat(),
		DrawColor, false, 0.5f);

#endif

	if (CollisionEnable)
	{
		int32	Count = CollisionResult.Num();

		for (int32 i = 0; i < Count; ++i)
		{
			ACharacterBase* Character = Cast<ACharacterBase>(CollisionResult[i].GetActor());

			if (IsValid(Character))
			{
				if(Character->GetCurrentHealth() > 0)
				Character->TakeDamage(1.f, FDamageEvent(), GetController(), this);
			}
		}
	}
}

