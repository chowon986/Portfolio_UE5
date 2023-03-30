// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenBase.h"
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

	AMonsterAIController* AIController =
		Cast<AMonsterAIController>(NewController);

	if (IsValid(AIController))
	{
		AIController->SetBehaviorTree(TEXT("BehaviorTree'/Game/Monster/BTMonster.BTMonster'"));
		AIController->SetBlackboard(TEXT("BlackboardData'/Game/Monster/BBMonster.BBMonster'"));
	}
}

void AChickenBase::UnPossessed()
{
	Super::UnPossessed();
}

void AChickenBase::RunAway()
{
	AddMovementInput(GetActorForwardVector(), 1.5f);
}

void AChickenBase::Idle()
{
	int RandomDirection = FMath::RandRange(1, 100);
	TArray<float> DirectionArray = { -90.f, -45.0f, -135, 0.f, -180.f, -270.f, -315.f, -225.f};


	if (RandomDirection == 50)
	{
		int i = FMath::RandRange(0, 6);
		GetCapsuleComponent()->SetRelativeRotation(FRotator(0.0, DirectionArray[i], 0.0));
	}

	AddMovementInput(GetActorForwardVector(), 0.5f);
}

void AChickenBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (0 == GetMovementComponent()->Velocity.Size())
	{
		mElapsedTime = 0.f;
		mFootStaticMesh->SetStaticMesh(mIdleMesh);
	}
	else
	{
		mElapsedTime += DeltaTime;
		mFootStaticMesh->SetStaticMesh(mRunMesh);
		if (mElapsedTime > mIntervalTime)
		{
			mElapsedTime = 0.f;
		
			mPitch = mPitch == 180 ? 0 : 180;
			mFootStaticMesh->SetRelativeRotation(FRotator(mPitch, 0.0, 0.0));
		}
	}
}

void AChickenBase::OnHealthUpdate()
{
	if (GetCurrentHealth() <= 0)
	{
		Destroy();
		GetWorld()->SpawnActor<ANonPlayerActorBase>(mItemClass, GetTransform()); //아이템 생성하기 -> 이 아이템도 replicates 확인하기
	}
}