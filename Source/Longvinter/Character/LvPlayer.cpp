// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayer.h"
#include "LvPlayerController.h"
#include "../UMG/ItemDataBase.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "LvPlayerAnimInstance.h"
#include "../Inventory/Inventory.h"
#include "../UMG/InventoryBase.h"
#include "../UMG/MainHUDBase.h"
#include "../Component/InventoryComponent.h"
#include "../LongvinterGameModeBase.h"
#include "Net/UnrealNetwork.h"

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

	mPrevTime = 0;
}

void ALvPlayer::BeginPlay()
{
	Super::BeginPlay();

	//UInventory::GetInst(GetWorld())->ShowInventory(false);
}

void ALvPlayer::ServerSetState_Implementation(EPlayerState State)
{
	SetState(State);

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
		mFishingTime = 5.f;
		GetWorldTimerManager().SetTimer(FishingTimerHandle, FTimerDelegate::CreateUObject(this, &ALvPlayer::ServerOnFishingTimerExpired), mFishingTime, false);
	}
}

void ALvPlayer::ServerSetBanFishingTimer()
{
	mBanFishingTime = 5.f;
	mCanFishing = false;
	GetWorldTimerManager().SetTimer(FishingTimerHandle, FTimerDelegate::CreateUObject(this, &ALvPlayer::ServerOnBanFishingTimerExpired), mBanFishingTime, false);
}

void ALvPlayer::ServerOnFishingTimerExpired()
{
	// 낚시가 성공했을 때 캐릭터한테 아이템 주기
	//int ItemID = FMath::RandRange(1, 17);
	int ItemID = 1;
	ClientOnFishingFinished(ItemID);
	GetInventoryComponent()->ServerAddItem(ItemID);
	FishingTimerHandle.Invalidate();
	GetWorldTimerManager().SetTimer(SetIdleStateTimerHandle, FTimerDelegate::CreateLambda(
		[this]() 
		{
			if (IsValid(this))
			{
				this->SetState(EPlayerState::Idle);
				SetIdleStateTimerHandle.Invalidate();
			}
		}), 1, false);
}

void ALvPlayer::ServerOnBanFishingTimerExpired()
{
	mCanFishing = true;
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

	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("VerticalMove"), this, &ALvPlayer::VerticalMove);
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("HorizontalMove"), this, &ALvPlayer::HorizontalMove);
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("Aim"), this, &ALvPlayer::Aim);

	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Wave"), EInputEvent::IE_Pressed, this, &ALvPlayer::Wave);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Sit"), EInputEvent::IE_Pressed, this, &ALvPlayer::Sit);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Click"), EInputEvent::IE_Pressed, this, &ALvPlayer::Click);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Inventory"), EInputEvent::IE_Pressed, this, &ALvPlayer::InventoryOnOff);
}

void ALvPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALvPlayer, mPlayerState);
	DOREPLIFETIME(ALvPlayer, mCanFishing);
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
		}
		else if (Scale == 1.f)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -45.0, 0.0));
		}
		else
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -135.0, 0.0));
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
		}
		else
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -180.0, 0.0));
		}
	}
	else
	{
		if (Scale == 0.f)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -270.0, 0.0));
		}
		else if (Scale == 1.f)
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -315, 0.0));
		}
		else
		{
			GetMesh()->SetRelativeRotation(FRotator(0.0, -225, 0.0));
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
	else if (GetState() == EPlayerState::Aim && Scale == 0)
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
	ALvPlayerController* PlayerController = Cast<ALvPlayerController>(GetController());
	
	if (IsValid(PlayerController))
	{
		if (GetState() == EPlayerState::Aim)
		{
			PlayerController->UseTool();
		}

		else
		PlayerController->Click();
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
	bool IsOpened = IsInventoryOpen();

	int CurTime = 0;
	float CurPartical = 0.f;
	UGameplayStatics::GetAccurateRealTime(CurTime, CurPartical);

	if (CurTime - mPrevTime < 1)
		return;

	mPrevTime = CurTime;

	ALvPlayerController* LvPlayerController = Cast<ALvPlayerController>(GetController());
	if (true == LvPlayerController->IsLocalController())
	{
		UMainHUDBase* MainHUDBase = LvPlayerController->GetMainHUD();
		UInventoryBase* InventoryWidget = MainHUDBase->GetInventoryWidget();

		if (!IsOpened)
		{
			InventoryWidget->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			InventoryWidget->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void ALvPlayer::SetState(EPlayerState State)
{
	if (mPlayerState != State)
	{
		mPlayerState = State;
		ServerSetState(mPlayerState);
	}
}

void ALvPlayer::ServerAddInventoryItem_Implementation(int ItemID)
{
	GetInventoryComponent()->ServerAddItem(ItemID);
}


void ALvPlayer::ClientOnFishingFinished_Implementation(int ItemID)
{
	mFinishFishing = true;
}

bool ALvPlayer::IsInventoryOpen()
{
	ALvPlayerController* LvPlayerController = Cast<ALvPlayerController>(GetController());
	UMainHUDBase* MainHUDBase = LvPlayerController->GetMainHUD();

	if (IsValid(MainHUDBase))
	{
		UInventoryBase* InventoryWidget = MainHUDBase->GetInventoryWidget();

		return InventoryWidget->IsVisible();
	}

	return false;
}