// Fill out your copyright notice in the Description page of Project Settings.


#include "Terret.h"
#include "Net/UnrealNetwork.h"
#include "MonsterAIController.h"
#include "LvPlayer.h"
#include "Projectile_Bullet.h"

ATerret::ATerret()
{
	PrimaryActorTick.bCanEverTick = true;

	MaxHealth = 10;
	CurrentHealth = MaxHealth;

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Terret"));
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SetCanBeDamaged(true);

	bReplicates = true;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = AMonsterAIController::StaticClass();

	mElapsedTime = 0.f;
	mIntervalTime = 0.f;

	mAttackElapsedTime = 0.f;
	mAttackIntervalTime = 1.5f;
}

void ATerret::SetState(ETerretState State)
{
	if (mCurState != State)
	{
		mCurState = State;
	}
}

void ATerret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (mCurState)
	{
	case ETerretState::Idle:
		Idle();
		break;
	case ETerretState::Attack:
		Attack();
		break;
	default:
		break;
	}
}

void ATerret::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AMonsterAIController* AIController = Cast<AMonsterAIController>(NewController);

	if (IsValid(AIController))
	{
		AIController->SetBehaviorTree(TEXT("BehaviorTree'/Game/NPC/BTTerret.BTTerret'"));
		AIController->SetBlackboard(TEXT("BlackboardData'/Game/NPC/BBTerret.BBTerret'"));
	}
}

void ATerret::UnPossessed()
{
	Super::UnPossessed();
}

void ATerret::Idle()
{
	mAttackElapsedTime = 0.f;
	mElapsedTime += GetWorld()->GetDeltaSeconds();
	
	if (GetLocalRole() == ROLE_Authority)
	{
		if (mElapsedTime > mIntervalTime)
		{
			mElapsedTime = 0.f;

			FRotator CurRotator = GetCapsuleComponent()->GetRelativeRotation();
			FRotator TargetRotator = FRotator(CurRotator.Pitch, CurRotator.Yaw + 90.f, CurRotator.Roll);

			GetCapsuleComponent()->SetRelativeRotation(FMath::RInterpTo(GetActorRotation(), TargetRotator, GetWorld()->GetDeltaSeconds(), 1.f));
			
		}
	}
}

void ATerret::Attack()
{
	mElapsedTime = 0.f;
	mAttackElapsedTime += GetWorld()->GetDeltaSeconds();

	if (mAttackElapsedTime > mAttackIntervalTime)
	{
		mAttackElapsedTime = 0.f;

		if (GetLocalRole() == ROLE_Authority)
		{
			AMonsterAIController* AIController = Cast<AMonsterAIController>(GetController());
			ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(AIController->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

			if (IsValid(PlayerCharacter))
			{
				FVector Direction = PlayerCharacter->GetActorLocation() - GetActorLocation();
				Direction.Normalize();

				GetCapsuleComponent()->SetRelativeRotation(FMath::RInterpTo(GetActorRotation(), Direction.Rotation(), GetWorld()->GetDeltaSeconds(), 3.f)); // 테스트 필요

				if (ProjectileClass)
				{
					UWorld* World = GetWorld();
					if (World)
					{
						FActorSpawnParameters SpawnParams;
						SpawnParams.Owner = this;
						SpawnParams.Instigator = GetInstigator();

						AProjectile_Bullet* Projectile =
							GetWorld()->SpawnActor<AProjectile_Bullet>(ProjectileClass,
								GetActorLocation() + GetActorForwardVector() * 50.f,
								GetActorRotation(),
								SpawnParams);
					}
				}
			}
		}
	}
}
