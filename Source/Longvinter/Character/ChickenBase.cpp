// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenBase.h"
#include "LvPlayer.h"
#include "Net/UnrealNetwork.h"
#include "MonsterAIController.h"


AChickenBase::AChickenBase()
{
	PrimaryActorTick.bCanEverTick = true;

	MaxHealth = 10;
	CurrentHealth = MaxHealth;

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Chicken"));
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SetCanBeDamaged(true);

	bReplicates = true;

	mBodyStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyStaticMesh"));
	mBodyStaticMesh->SetupAttachment(GetCapsuleComponent());
	mFootStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FootStaticMesh"));
	mFootStaticMesh->SetupAttachment(GetCapsuleComponent());

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = AMonsterAIController::StaticClass();

	mPitch = 0;

	mChangeDirectionIntervalTime = 1.f;
	mChangeDirectionElapsedTime = 0.f;
}

void AChickenBase::BeginPlay()
{
	Super::BeginPlay();
}

float AChickenBase::TakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damageApplied = CurrentHealth - DamageTaken;
	SetCurrentHealth(damageApplied);

	return damageApplied;
}

void AChickenBase::SetCurrentHealth(float healthValue)
{
	CurrentHealth = FMath::Clamp(healthValue, 0.f, MaxHealth);
	OnHealthUpdate();
}

void AChickenBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AMonsterAIController* AIController = Cast<AMonsterAIController>(NewController);

	if (IsValid(AIController))
	{
		AIController->SetBehaviorTree(TEXT("BehaviorTree'/Game/NPC/BTMonster.BTMonster'"));
		AIController->SetBlackboard(TEXT("BlackboardData'/Game/NPC/BBMonster.BBMonster'"));
	}
}

void AChickenBase::UnPossessed()
{
	Super::UnPossessed();
}

void AChickenBase::RunAway()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		AMonsterAIController* AIController = Cast<AMonsterAIController>(GetController());
		ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(AIController->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (IsValid(PlayerCharacter))
		{
			FVector Direction = GetActorLocation() - PlayerCharacter->GetActorLocation();
			Direction.Normalize();

			AddMovementInput(Direction, 2.0f);
			FaceRotation(Direction.Rotation());
		}
	}

	else
		PlayFootAnimation();
}

void AChickenBase::Idle()
{
	mElapsedTime = 0.f;
	mFootStaticMesh->SetStaticMesh(mIdleMesh);
}

void AChickenBase::Walk()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		mChangeDirectionElapsedTime += GetWorld()->GetDeltaSeconds();

		if (mChangeDirectionElapsedTime > mChangeDirectionIntervalTime)
		{
			mChangeDirectionElapsedTime = 0.f;
			int RandomDirection = FMath::RandRange(1, 360);
			FRotator Direction = FRotator(0, RandomDirection, 0);
			FaceRotation(Direction);
		}
	}
	else
	PlayFootAnimation();

	AddMovementInput(GetActorForwardVector(), 0.3f);
}

void AChickenBase::PlayFootAnimation()
{
	mElapsedTime += GetWorld()->GetDeltaSeconds();
	mFootStaticMesh->SetStaticMesh(mRunMesh);
	if (mElapsedTime > mIntervalTime)
	{
		mElapsedTime = 0.f;

		mPitch = mPitch == 180 ? 0 : 180;
		mFootStaticMesh->SetRelativeRotation(FRotator(mPitch, 0.0, 0.0));
	}
}

void AChickenBase::SetState(EChickenState State)
{
	if (mCurState != State)
	{
		mCurState = State;
		mChangeDirectionElapsedTime = 0.f;
	}
}

void AChickenBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (mCurState)
	{
	case EChickenState::Idle:
		Idle();
		break;
	case EChickenState::Walk:
		Walk();
		break;
	case EChickenState::RunAway:
		RunAway();
		break;
	default:
		break;
	}
}

void AChickenBase::OnHealthUpdate()
{
	if (GetCurrentHealth() <= 0)
	{
		Destroy();
		FActorSpawnParameters Param;
		Param.Owner = this;

		GetWorld()->SpawnActor<ANonPlayerActorBase>(mItemClass, GetTransform(), Param); //아이템 생성하기 -> 이 아이템도 replicates 확인하기
	}
}