// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayer.h"
#include "LvPlayerController.h"
#include "../UMG/ItemDataBase.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "LvPlayerAnimInstance.h"
#include "../Inventory/Inventory.h"
#include "../UMG/CampFireBase.h"
#include "../UMG/InventoryBase.h"
#include "../Component/InventoryComponent.h"
#include "../Component/CraftComponent.h"
#include "../Component/Placeholder.h"
#include "../Component/EquipmentComponent.h"
#include "../LongvinterGameModeBase.h"
#include "Net/UnrealNetwork.h"
#include "../Character/ChickenBase.h"
#include "../Character/TreeBase.h"
#include "Projectile_Bullet.h"

ALvPlayer::ALvPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>	PlayerAsset(TEXT("SkeletalMesh'/Game/LV_Character/LV_Character01.LV_Character01'"));

	if (PlayerAsset.Succeeded())
		GetMesh()->SetSkeletalMesh(PlayerAsset.Object);

	GetMesh()->SetRelativeLocation(FVector(0.0, 0.0, -88.0));
	GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

	static ConstructorHelpers::FClassFinder<UAnimInstance>	AnimClass(TEXT("AnimBlueprint'/Game/Player/ABLvPlayer.ABLvPlayer_C'"));
	if (AnimClass.Succeeded())
		GetMesh()->SetAnimClass(AnimClass.Class);

	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	mSpringArm->SetupAttachment(GetCapsuleComponent());
	mCamera->SetupAttachment(mSpringArm);

	mSpringArm->TargetArmLength = 1000.f;

	mSpringArm->SetRelativeLocation(FVector(0.0, 0.0, 100.0));

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SetCanBeDamaged(true);

	mCanFishing = true;
	mFinishFishing = true;

	mInventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
	mCraftComponent = CreateDefaultSubobject<UCraftComponent>(TEXT("Craft"));
	mPlaceholder = CreateDefaultSubobject<UPlaceholder>(TEXT("Placeholder"));
	mEquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>(TEXT("Equipment"));

	mPrevTime = 0;
	mCanEKeyPressed = false;

	mHat = nullptr;
}

void ALvPlayer::BeginPlay()
{
	Super::BeginPlay();
}

void ALvPlayer::ServerSetState_Implementation(EPlayerState State)
{
	SetState(State); // 서버의 State 변경

	if (State == EPlayerState::Fishing)
	{
		ServerSetFishingTimer();
	}
	else
	{
		if (FishingTimerHandle.IsValid())
		{
			GetWorldTimerManager().ClearTimer(FishingTimerHandle);
			FishingTimerHandle.Invalidate();
			ServerSetBanFishingTimer();
		}
	}
}

void ALvPlayer::ServerSetFishingTimer()
{
	if (FishingTimerHandle.IsValid() == false)
	{
		mFishingTime = FMath::RandRange(3, 5);
		GetWorldTimerManager().SetTimer(FishingTimerHandle, FTimerDelegate::CreateUObject(this, &ALvPlayer::ServerOnFishingTimerExpired), mFishingTime, false);
	}
}

void ALvPlayer::ServerSetBanFishingTimer()
{
	mBanFishingTime = 5.f;
	mCanFishing = false;
	GetWorldTimerManager().SetTimer(FishingBanTimerHandle, FTimerDelegate::CreateUObject(this, &ALvPlayer::ServerOnBanFishingTimerExpired), mBanFishingTime, false);
}

void ALvPlayer::ServerOnFishingTimerExpired()
{
	// E키를 입력하시오
	{
		ClientNotifyPressE();

		float Time = 1.f;
		GetWorldTimerManager().SetTimer(PendingClientResponseTimerHandle, FTimerDelegate::CreateUObject(this, &ALvPlayer::ServerOnPendingClientResponseTimerExpired), Time, false);

		FishingTimerHandle.Invalidate();
	}
}

void ALvPlayer::ServerOnBanFishingTimerExpired()
{
	FishingBanTimerHandle.Invalidate();
	mCanFishing = true;
}

void ALvPlayer::CheckSuccessedFishing()
{
	if (true == mCanEKeyPressed)
	{
		ServerEKeyPressed();
		mCanEKeyPressed = false;
	}
}

void ALvPlayer::ServerOnPendingClientResponseTimerExpired()
{
	GetWorldTimerManager().SetTimer(SetIdleStateTimerHandle, FTimerDelegate::CreateLambda(
		[this]()
		{
			if (IsValid(this))
			{
				this->SetState(EPlayerState::Idle);
				SetIdleStateTimerHandle.Invalidate();
			}
		}), 1.0f, false);

	ClientOnFishingFinished();
}

void ALvPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UCharacterMovementComponent* Movement = GetCharacterMovement();
	if (Movement)
	{
		bool isMoving = Movement->Velocity.Size() != 0;
		if (isMoving)
		{
			if (GetState() != EPlayerState::Aim)
				SetState(EPlayerState::Idle);
		}
		else if (Movement->IsSwimming())
		{
			SetState(EPlayerState::SwimmingIdle);
		}
	}
}

void ALvPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 방향키
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("VerticalMove"), this, &ALvPlayer::VerticalMove);
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("HorizontalMove"), this, &ALvPlayer::HorizontalMove);

	// 마우스
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("Aim"), this, &ALvPlayer::Aim);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Click"), EInputEvent::IE_Pressed, this, &ALvPlayer::Click);

	// 키
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Sit"), EInputEvent::IE_Pressed, this, &ALvPlayer::Sit);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Wave"), EInputEvent::IE_Pressed, this, &ALvPlayer::Wave);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Inventory"), EInputEvent::IE_Pressed, this, &ALvPlayer::InventoryOnOff);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("FinishFishing"), EInputEvent::IE_Pressed, this, &ALvPlayer::CheckSuccessedFishing);
}

void ALvPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ALvPlayer, mPlayerState, COND_AutonomousOnly);
	DOREPLIFETIME_CONDITION(ALvPlayer, mCanFishing, COND_AutonomousOnly);
}

void ALvPlayer::VerticalMove(float Scale)
{
	mVerticalDir = Scale;

	if (Scale == 0.f)
		return;

	AddMovementInput(GetActorForwardVector(), Scale);
}

void ALvPlayer::HorizontalMove(float Scale)
{
	FRotator ControllerRotation = GetActorRotation();

	if (mVerticalDir == 1.f)
	{
		if (Scale == 0.f)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));
			mPlayerRotator = FRotator(0.0, -90.0, 0.0);
		}
		else if (Scale == 1.f)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -45.0, 0.0));
			mPlayerRotator = FRotator(0.0, -45.0, 0.0);
		}
		else
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -135.0, 0.0));
			mPlayerRotator = FRotator(0.0, -135.0, 0.0);
		}
	}
	else if (mVerticalDir == 0.f)
	{
		if (Scale == 0.f)
		{

		}
		else if (Scale == 1.f)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, 0.0, 0.0));
			mPlayerRotator = FRotator(0.0, 0.0, 0.0);
		}
		else
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -180.0, 0.0));
			mPlayerRotator = FRotator(0.0, -180.0, 0.0);
		}
	}
	else
	{
		if (Scale == 0.f)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -270.0, 0.0));
			mPlayerRotator = FRotator(0.0, -270.0, 0.0);
		}
		else if (Scale == 1.f)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -315, 0.0));
			mPlayerRotator = FRotator(0.0, -315.0, 0.0);
		}
		else
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -225, 0.0));
			mPlayerRotator = FRotator(0.0, -225.0, 0.0);
		}
	}

	if (Scale == 0.f)
		return;

	AddMovementInput(GetActorRightVector(), Scale);
}

void ALvPlayer::Aim(float Scale)
{
	if (Scale == 1)
	{
		if (GetState() == EPlayerState::Idle)
		{
			SetState(EPlayerState::Aim);
		}
	}
	else if (Scale == 0 && GetState() != EPlayerState::Fishing)
	{
		SetState(EPlayerState::Idle);
	}
}

void ALvPlayer::Wave()
{
	if (GetState() == EPlayerState::SitIdle)
	{
		SetState(EPlayerState::SitWave);
	}
	else
	{
		mAnimInst->Wave();
	}
}

void ALvPlayer::Sit()
{
	SetState(EPlayerState::Sit);
}

void ALvPlayer::Click()
{
	if (GetState() != EPlayerState::Aim)
		SetState(EPlayerState::GetItem);

	FHitResult Result;
	ALvPlayerController* PlayerController = GetController<ALvPlayerController>();
	bool Hit = PlayerController->GetHitResultUnderCursor(ECollisionChannel::ECC_GameTraceChannel3, false, Result);
	if (GetState() == EPlayerState::Aim)
	{
		AChickenBase* Chicken = Cast<AChickenBase>(Result.GetActor());
		//Chicken->ServerTakeDamage(1, FDamageEvent(), PlayerController, this);
		if (IsValid(Chicken))
		{
			ServerAttack(Chicken, 3.f);
			//Chicken->ServerTakeDamage(3.f, FDamageEvent(), GetController(), this);
		}
		else
		{
			ATreeBase* Tree = Cast<ATreeBase>(Result.GetActor());
			if (IsValid(Tree))
			{
				ServerAttack(Tree, 3.f);
			}
		}
	}
	else
	{
		// 총
		//Fire();

		if (Hit)
		{
			AFishingSpot* FishingSpot = Cast<AFishingSpot>(Result.GetActor());
			if (IsValid(FishingSpot))
			{
				if (GetCanFishing() == true)
					Fishing();
			}
			else
			{
				ANonPlayerActorBase* NPA = Cast<ANonPlayerActorBase>(Result.GetActor());
				if (IsValid(NPA))
				{
					int ItemID = NPA->GetItemID();
					if (-1 != ItemID)
					{
						GetInventoryComponent()->ServerAddItem(NPA->GetItemID());
						ServerDestroy(NPA);
					}
				}
			}

			OnActorClickedEvent.Broadcast(Result.GetActor());
		}
	}
}

void ALvPlayer::Fishing()
{
	TArray<FHitResult>	CollisionResult;

	FVector	StartLocation = GetActorLocation() +
		GetActorForwardVector() * 30.f;
	FVector	EndLocation = StartLocation +
		GetActorForwardVector() * 500.f;

	FCollisionQueryParams	param(NAME_None, false, this);

	bool Hit = GetWorld()->SweepMultiByChannel(
		CollisionResult, StartLocation,
		EndLocation, FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel3,
		FCollisionShape::MakeSphere(50.f),
		param);

	if (Hit)
	{
		SetState(EPlayerState::Fishing);
		mFinishFishing = false;
	}
}

void ALvPlayer::InventoryOnOff()
{
	OnInventoryOnOffEvent.Broadcast();
}

void ALvPlayer::SetState(EPlayerState State)
{
	if (mPlayerState != State)
	{
		mPlayerState = State;
		ServerSetState(mPlayerState);
	}
}

void ALvPlayer::Fire()
{
	if (ProjectileClass)
	{
		FVector Location;
		FRotator Rotation;
		GetActorEyesViewPoint(Location, Rotation);

		FVector MuzzleLocation = Location + FTransform(Rotation).TransformVector(MuzzleOffset);
		FRotator MuzzleRotation = mPlayerRotator + FRotator(0.f, 90.f, 0.f);

		MuzzleLocation.Z -= 30.0f;

		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			AProjectile_Bullet* Projectile = World->SpawnActor<AProjectile_Bullet>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				// 발사 방향을 알아냅니다.
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}

void ALvPlayer::SetHat(int32 ItemID)
{
	FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);

	FActorSpawnParameters	SpawnParam;
	SpawnParam.SpawnCollisionHandlingOverride =
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	mHat = GetWorld()->SpawnActor<AEquipmentActor>(AEquipmentActor::StaticClass(), SpawnParam);

	mHat->SetMesh(ItemTable->EquipmentTexturePath);

	//mHat->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("head_end_end_socket"));
}

void ALvPlayer::ServerAttack_Implementation(AActor* Actor, float Damage)
{
	Actor->TakeDamage(Damage, FDamageEvent(), GetController(), this);
}

void ALvPlayer::ClientOnFishingFinished_Implementation()
{
	mFinishFishing = true;
	mCanEKeyPressed = false;
}


void ALvPlayer::ClientNotifyPressE_Implementation()
{
	mCanEKeyPressed = true;
}

void ALvPlayer::ServerEKeyPressed_Implementation()
{
	if (PendingClientResponseTimerHandle.IsValid())
	{
		//int ItemID = FMath::RandRange(1, 17);
		{
			//int ItemID = 1;
			int ItemID = 403;
			ClientOnFishingFinished();
			GetInventoryComponent()->ServerAddItem(ItemID);

			GetWorldTimerManager().SetTimer(SetIdleStateTimerHandle, FTimerDelegate::CreateLambda(
				[this]()
				{
					if (IsValid(this))
					{
						this->SetState(EPlayerState::Idle);
						SetIdleStateTimerHandle.Invalidate();
					}
				}), 1, false);

			GetWorldTimerManager().ClearTimer(PendingClientResponseTimerHandle);
			PendingClientResponseTimerHandle.Invalidate();
		}
	}
}

void ALvPlayer::ServerDestroy_Implementation(AActor* Actor)
{
	Actor->Destroy();
}
