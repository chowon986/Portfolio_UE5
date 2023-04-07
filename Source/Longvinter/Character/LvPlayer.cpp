// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayer.h"
#include "LvPlayerController.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "LvPlayerAnimInstance.h"
#include "PlaceholderActor.h"
#include "Net/UnrealNetwork.h"
#include "Projectile_Bullet.h"
#include "../LongvinterGameModeBase.h"
#include "../UMG/ItemDataBase.h"
#include "../UMG/CampFireBase.h"
#include "../UMG/InventoryBase.h"
#include "../Inventory/Inventory.h"
#include "../Component/InventoryComponent.h"
#include "../Component/CraftComponent.h"
#include "../Component/EquipmentComponent.h"
#include "../Component/EncyclopediaComponent.h"
#include "ChickenBase.h"
#include "TreeBase.h"
#include "FarmingBox.h"
#include "Beach.h"
#include "Bundle.h"
#include "GroundBase.h"

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

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate


	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SetCanBeDamaged(true);

	mCanFishing = true;
	mFinishFishing = true;

	mInventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
	mInventoryComponent->SetIsReplicated(true);
	mCraftComponent = CreateDefaultSubobject<UCraftComponent>(TEXT("Craft"));
	mCraftComponent->SetIsReplicated(true);
	mEquipmentComponent = CreateDefaultSubobject<UEquipmentComponent>(TEXT("Equipment"));
	mEquipmentComponent->SetIsReplicated(true);
	mPlaceholderComponent = CreateDefaultSubobject<UPlaceholder>(TEXT("Placeholder"));
	mPlaceholderComponent->SetIsReplicated(true);
	mEncyclopediaComponent = CreateDefaultSubobject<UEncyclopediaComponent>(TEXT("EncyclopediaComponent"));
	mEncyclopediaComponent->SetIsReplicated(true);

	mPrevTime = 0;
	mCanEKeyPressed = false;

	mHat = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hat"));
	mRod = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rod"));
	mWeapon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon"));
	mBackpack = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackPack"));
	mBackpack->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("BackpackSocket"));

	mOnceCheck = false;

	mAmmoCount = 10;

	mFishingSpeedRatio = 1;

	mIsSetting = false;
	mCanThrow = false;

	mCanTakeDamageElapsedTime = 0.f;
	mCanTakeDamageIntervalTime = 3.f;
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
			
			mFishingSpot = nullptr;
		}
	}
}

void ALvPlayer::ServerSetFishingTimer()
{
	if (FishingTimerHandle.IsValid() == false)
	{
		mFishingTime = FMath::RandRange(3, 5);

		mFishingTime *= mFishingSpeedRatio;

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

				TArray<int32> Items = GetEquipmentComponent()->GetItems();

				for (int32 Item : Items)
				{
					FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

					if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
						mRod->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));
				}
			}
		}), 1.0f, false);

	ClientOnFishingFinished();
}

void ALvPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	mCanTakeDamageElapsedTime += DeltaTime;

	if (IsValid(this))
	{
		UCharacterMovementComponent* Movement = GetCharacterMovement();
		if (Movement)
		{
			bool isMoving = Movement->Velocity.Size() != 0;
			if (isMoving)
			{
				if (GetState() != EPlayerState::Aim &&
					GetState() != EPlayerState::SwimmingIdle)
				{
					SetState(EPlayerState::Idle);

					TArray<int32> Items = GetEquipmentComponent()->GetItems();

					for (int32 Item : Items)
					{
						FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

						if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
							mRod->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));

						else if(ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Gun ||
							ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
							mWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));
					}
				}
			}
			else if (GetState() == EPlayerState::SwimmingIdle)
			{
				TArray<int32> Items = GetEquipmentComponent()->GetItems();

				for (int32 Item : Items)
				{
					FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

					if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
						mRod->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));
					
					else if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Gun ||
						ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
						mWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));
				}
			}
		}
	}

	FCollisionQueryParams	param(NAME_None, false, this);

	TArray<FOverlapResult>	ResultArray;

	bool CollisionEnable = GetWorld()->OverlapMultiByChannel(ResultArray,
		GetActorLocation(), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel1,
		FCollisionShape::MakeSphere(100),
		param);

	if (GetState() != EPlayerState::SwimmingIdle)
	{
		if (CollisionEnable)
		{
			for (const auto& Result : ResultArray)
			{
				if (ABeach* Beach = Cast<ABeach>(Result.GetActor()))
					SetState(EPlayerState::SwimmingIdle);

				if (mCanTakeDamageElapsedTime > mCanTakeDamageIntervalTime)
				{
					mCanTakeDamageElapsedTime = 0.f;

					if (AGroundBase* Ground = Cast<AGroundBase>(Result.GetActor()))
					{
						if (Ground->GetGroundType() == EGroundType::Green)
						{
							if (GetCurrentHealth() <= 1.f)
								return;
						}

						TakeDamage(Ground->GetDamage(), FDamageEvent(), GetController(), Ground);
					}
				}
			}
		}
	}
	else
	{
		if (CollisionEnable)
		{
			int Count = 0;

			for (const auto& Result : ResultArray)
			{
				ABeach* Beach = Cast<ABeach>(Result.GetActor());
				if (!IsValid(Beach))
					++Count;
				else
				{
					if (mCanTakeDamageElapsedTime > mCanTakeDamageIntervalTime)
					{
						mCanTakeDamageElapsedTime = 0.f;
						TakeDamage(1.f, FDamageEvent(), GetController(), Beach);
					}
				}
			}

			if (Count == ResultArray.Num())
				SetState(EPlayerState::Idle);
		}
		else
				SetState(EPlayerState::Idle);
	}


	if (mIsSetting)
	{
		
	}
}


void ALvPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 방향키
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("VerticalMove"), this, &ALvPlayer::VerticalMove);
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("HorizontalMove"), this, &ALvPlayer::HorizontalMove);
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("ThrowItem"), this, &ALvPlayer::ThrowItem);

	// 마우스
	PlayerInputComponent->BindAxis<ALvPlayer>(TEXT("Aim"), this, &ALvPlayer::Aim);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Click"), EInputEvent::IE_Pressed, this, &ALvPlayer::Click);

	// 키
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Sit"), EInputEvent::IE_Pressed, this, &ALvPlayer::Sit);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Wave"), EInputEvent::IE_Pressed, this, &ALvPlayer::Wave);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("Inventory"), EInputEvent::IE_Pressed, this, &ALvPlayer::InventoryOnOff);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("FinishFishing"), EInputEvent::IE_Pressed, this, &ALvPlayer::CheckSuccessedFishing);
	PlayerInputComponent->BindAction<ALvPlayer>(TEXT("AddWood"), EInputEvent::IE_Pressed, this, &ALvPlayer::AddWood);
}

void ALvPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALvPlayer, mPlayerState);
	DOREPLIFETIME_CONDITION(ALvPlayer, mCanFishing, COND_AutonomousOnly);
	DOREPLIFETIME_CONDITION(ALvPlayer, mPlayerHP, COND_AutonomousOnly);
}

void ALvPlayer::VerticalMove(float Scale)
{
	mVerticalDir = Scale;

	if (Scale == 0.f)
		return;

	AddMovementInput(FVector::ForwardVector, Scale);
}

void ALvPlayer::HorizontalMove(float Scale)
{
	FRotator ControllerRotation = GetActorRotation();

	if (mVerticalDir == 1.f)
	{
		if (Scale == 0.f)
		{
			mPlayerRotator = FRotator(0.0, -90.0, 0.0);
		}
		else if (Scale == 1.f)
		{
			mPlayerRotator = FRotator(0.0, -45.0, 0.0);

		}
		else
		{
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
			mPlayerRotator = FRotator(0.0, 0.0, 0.0);
		}
		else
		{
			mPlayerRotator = FRotator(0.0, -180.0, 0.0);
		}
	}
	else
	{
		if (Scale == 0.f)
		{
			mPlayerRotator = FRotator(0.0, -270.0, 0.0);
		}
		else if (Scale == 1.f)
		{
			mPlayerRotator = FRotator(0.0, -315.0, 0.0);
		}
		else
		{
			mPlayerRotator = FRotator(0.0, -225.0, 0.0);
		}
	}

	AddControllerYawInput(mPlayerRotator.Yaw);

	if (Scale == 0.f)
		return;

	AddMovementInput(FVector::RightVector, Scale);
}

void ALvPlayer::Aim(float Scale)
{
	if (Scale == 1)
	{
		if (GetState() == EPlayerState::Idle)
		{
			if (mWeapon)
			{
				TArray<int32> Items = GetEquipmentComponent()->GetItems();

				for (int32 Item : Items)
				{
					FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

					if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Gun ||
						ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
					{
						mWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->AimSocketName));
						SetState(EPlayerState::Aim);
					}
				}

			}
		}
	}
	else if (Scale == 0 && 
		GetState() != EPlayerState::Fishing 
		&& GetState() != EPlayerState::SwimmingIdle
		&& GetState() != EPlayerState::Sit
		&& GetState() != EPlayerState::SitIdle
		&& GetState() != EPlayerState::SitWave
		&& GetState() != EPlayerState::GetItem
		&& GetState() != EPlayerState::Death)
	{
		SetState(EPlayerState::Idle);

		if (mWeapon)
		{
			TArray<int32> Items = GetEquipmentComponent()->GetItems();

			for (int32 Item : Items)
			{
				FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

				if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Gun ||
					ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
					mWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));

				else if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
					mRod->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));

			}
		}
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
	FHitResult Result;
	ALvPlayerController* PlayerController = GetController<ALvPlayerController>();
	bool Hit = PlayerController->GetHitResultUnderCursor(ECollisionChannel::ECC_GameTraceChannel3, false, Result);

	if (GetState() == EPlayerState::Aim) // 낚시대 제외 무기를 끼고 Aim하면 Aim 상태임
	{
		if (mWeapon)
		{
			ServerUseWeapon();
		}

		AChickenBase* Chicken = Cast<AChickenBase>(Result.GetActor());
		if (IsValid(Chicken))
		{
			ServerAttack(Chicken, 3.f);
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

	if (Hit)
	{
		if (GetState() != EPlayerState::Aim)
			SetState(EPlayerState::GetItem);
		// 총
		//Fire();

		AFishingSpot* FishingSpot = Cast<AFishingSpot>(Result.GetActor());
		if (IsValid(FishingSpot))
		{
			ServerSetFishingSpot(FishingSpot);
			if (GetCanFishing() == true)
				Fishing();
		}
		else
		{
			ANonPlayerActorBase* NPA = Cast<ANonPlayerActorBase>(Result.GetActor());
			if (IsValid(NPA))
			{

				ABundle* BundleItem = Cast<ABundle>(NPA);
				if (IsValid(BundleItem))
				{
					if (BundleItem->GetItemID() == -1)
					{
						return;
					}

					mInventoryComponent->ServerAddItem(BundleItem->GetItemID());
					ServerDestroy(BundleItem);
				}
				else
				{
					APlaceholderActor* Items = Cast<APlaceholderActor>(NPA);
					if (IsValid(Items))
					{
						PlayerController->GetMainHUD()->GetPlaceholderWidget()->SetPlaceholder(Items);
						//PlayerController->GetMainHUD()->GetPlaceholderWidget()->SetPlaceholder(Items->GetPlaceholderComponent());
						PlayerController->GetMainHUD()->GetPlaceholderWidget()->SetVisibility(ESlateVisibility::Visible);
					}
					else
					{
						AFarmingBox* FarmingBox = Cast<AFarmingBox>(NPA);
						if (IsValid(FarmingBox))
						{
							PlayerController->GetMainHUD()->GetRandomBoxWidget()->SetOnceCheck(false);
							PlayerController->GetMainHUD()->GetRandomBoxWidget()->ServerSetRandomBox(FarmingBox);
							PlayerController->GetMainHUD()->GetRandomBoxWidget()->SetVisibility(ESlateVisibility::Visible);
						}

						else
						{
							int ItemID = NPA->GetItemID();
							if (-1 != ItemID)
							{
								GetInventoryComponent()->ServerAddItem(ItemID);
								GetEncyclopediaComponent()->ServerUpdateItem(ItemID);
								ServerDestroy(NPA);
							}
						}
					}
				}
			}
		}

		OnActorClickedEvent.Broadcast(Result.GetActor());
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

		TArray<int32> Items = GetEquipmentComponent()->GetItems();

		for (int32 Item : Items)
		{
			FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

			if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
			mRod->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->AimSocketName));
		}
	}
}

void ALvPlayer::InventoryOnOff()
{
	OnInventoryOnOffEvent.Broadcast();
}

void ALvPlayer::AddWood()
{
	if (IsValid(mInventoryComponent))
	{
		mInventoryComponent->ServerAddItem(104);
	}
}

void ALvPlayer::ThrowItem(float Scale)
{
	if (Scale == 1)
		mCanThrow = true;
	else
		mCanThrow = false;
}

void ALvPlayer::SetState(EPlayerState State)
{
	if (mPlayerState != State)
	{
		mPlayerState = State;
		ServerSetState(mPlayerState);
	}
}

void ALvPlayer::ServerSpawnPlaceholder_Implementation()
{
	TArray<int32> AllItems = mInventoryComponent->GetItems();

	FActorSpawnParameters Param;
	Param.Owner = this;

	APlaceholderActor* SpawnedActor = GetWorld()->SpawnActor<APlaceholderActor>(APlaceholderActor::StaticClass(), GetTransform(), Param);
	SpawnedActor->ServerAddAllItems(AllItems);

	AllItems = mEquipmentComponent->GetItems();
	SpawnedActor->ServerAddAllItems(AllItems);
}

void ALvPlayer::OnRep_HP()
{
	OnPlayerHPChangedEvent.Broadcast(mPlayerHP);
}

void ALvPlayer::Fire()
{
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

void ALvPlayer::ServerAddPlaceholderItems_Implementation(APlaceholderActor* PlaceholderActor, int32 ItemID)
{
	GetInventoryComponent()->ServerAddItem(ItemID);
	GetEncyclopediaComponent()->ServerAddItem(ItemID);
	PlaceholderActor->GetPlaceholderComponent()->ServerRemoveItem(ItemID);
}

void ALvPlayer::ServerUseWeapon_Implementation()
{
	TArray<int32> Items = GetEquipmentComponent()->GetItems();
	for (int32 Item : Items)
	{
		FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

		if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Gun)
		{
			if (mAmmoCount > 0)
			{
				--mAmmoCount;
				Fire();
			}
		}
		else if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
		{
			FVector	StartLocation = GetActorLocation() +
				GetActorForwardVector() * 30.f;
			FVector	EndLocation = StartLocation +
				GetActorForwardVector() * 50.f;

			FCollisionQueryParams	param(NAME_None, false, this);

			TArray<FHitResult>	Result;
			bool Hit = GetWorld()->SweepMultiByChannel(
				Result, StartLocation,
				EndLocation, FQuat::Identity,
				ECollisionChannel::ECC_GameTraceChannel3,
				FCollisionShape::MakeSphere(20.f),
				param);

			if (Result.Num() > 0)
			{
				for (auto Character : Result)
				{
					ACharacterBase* CharacterBase = Cast<ACharacterBase>(Character.GetActor());
					if (IsValid(CharacterBase))
					{
						CharacterBase->TakeDamage(6.0, FDamageEvent(), GetController(), this);
					}
				}
			}
		}
	}
}

void ALvPlayer::ServerThrowAwayItem_Implementation(int32 ItemID)
{
	FActorSpawnParameters Param;
	Param.Owner = this;
	Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	FTransform CurTransform = GetTransform();
	
	float ZValue = CurTransform.GetLocation().Z - GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	float XValue = CurTransform.GetLocation().X + 30;
	float YValue = CurTransform.GetLocation().Y;


	ABundle* SpawnedActor = GetWorld()->SpawnActor<ABundle>(ABundle::StaticClass(), FVector(XValue, YValue, ZValue), CurTransform.GetRotation().Rotator(), Param);
	SpawnedActor->SetItemID(ItemID);
}

void ALvPlayer::OnEquipmentItemChanged()
{
	TArray<int32> Items = GetEquipmentComponent()->GetItems();

	if (IsValid(mHat))
		mHat->SetStaticMesh(nullptr);
	if (IsValid(mWeapon))
		mWeapon->SetStaticMesh(nullptr);

	if(IsValid(mRod))
		mRod->SetStaticMesh(nullptr);

	for (int32 Item : Items)
	{
		FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

		if (ItemTable->EquipmentType == EEquipmentType::Equipment_Hat)
		{
			mHat->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, *(ItemTable->EquipmentTexturePath)));

			mHat->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));
		}
		else if(ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Gun)
		{
			mWeapon->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, *(ItemTable->EquipmentTexturePath)));

			mWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));
		}
		else if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
		{
			mRod->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, *(ItemTable->EquipmentTexturePath)));
			mRod->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));
		}
		else if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
		{
			mWeapon->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, *(ItemTable->EquipmentTexturePath)));
			mWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->IdleSocketName));
		}
	}
}

void ALvPlayer::ServerSetFishingSpot_Implementation(AFishingSpot* Spot)
{
	mFishingSpot = Spot;
}

void ALvPlayer::DeleteAllItems()
{
	TArray<int32> AllItems = mInventoryComponent->GetItems();

	mInventoryComponent->ServerRemoveAllItems(AllItems);

	AllItems = mEquipmentComponent->GetItems();
	mEquipmentComponent->ServerRemoveAllItems(AllItems);
}

void ALvPlayer::OnHealthUpdate()
{
	if (GetCurrentHealth() <= 0 && !mOnceCheck)
	{	
		mOnceCheck = true;

		ServerSpawnPlaceholder();

		DeleteAllItems();

		//Destroy();
		
		// 사라지는 애니메이션 보여주고
		// 레벨 전환
	}

	if (GetCurrentHealth() != mPlayerHP)
	{
		mPlayerHP = GetCurrentHealth();
	}
}

void ALvPlayer::ServerAttack_Implementation(AActor* Actor, float Damage)
{
	if (Actor == nullptr)
		return;

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
		if (mFishingSpot != nullptr)
		{
			int32 ItemID = mFishingSpot->GetRandomFish();
			mFishingSpot = nullptr;

			ItemID = 406; // 테스트 코드 : 총
			//ItemID = 411; // 테스트 코드 : 톱
			//ItemID = 502; // 테스트 코드 : 텐트
			//ItemID = 104; // 테스트 코드 : 나무
			if (ItemID != -1)
			{
				ClientOnFishingFinished();
				GetInventoryComponent()->ServerAddItem(ItemID);
				GetEncyclopediaComponent()->ServerUpdateItem(ItemID);

				GetWorldTimerManager().SetTimer(SetIdleStateTimerHandle, FTimerDelegate::CreateLambda(
					[this]()
					{
						if (IsValid(this))
						{
							this->SetState(EPlayerState::Idle);

							SetIdleStateTimerHandle.Invalidate();

							TArray<int32> Items = GetEquipmentComponent()->GetItems();

							for (int32 Item : Items)
							{
								FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

								if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
									mRod->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, *(ItemTable->AimSocketName));
							}
						}
					}), 1, false);

				GetWorldTimerManager().ClearTimer(PendingClientResponseTimerHandle);
				PendingClientResponseTimerHandle.Invalidate();
			}
		}
	}
}

void ALvPlayer::ServerDestroy_Implementation(AActor* Actor)
{
	Actor->Destroy();
}
