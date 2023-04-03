// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUDBase.h"
#include "../Character/LvPlayer.h"
#include "../Character/VendorBase.h"
#include "../Character/CampFire.h"
#include "../Component/InventoryComponent.h"
#include "../Component/CraftComponent.h"
#include "../Component/EquipmentComponent.h"
#include "../Component/FarmingBoxComponent.h"
#include "../Component/Placeholder.h"
#include "../Character/PlaceholderActor.h"

void UMainHUDBase::NativeConstruct()
{
	Super::NativeConstruct();

	mOnceCheck = false;
	mPlayerInfo = Cast<UPlayerInfoBase>(GetWidgetFromName(FName(TEXT("UIPlayerInfo"))));

	mInventory = Cast<UInventoryBase>(GetWidgetFromName(FName(TEXT("UIInventory"))));
	mInventory->SetVisibility(ESlateVisibility::Collapsed);
	
	//mItemIcon = Cast<UInventoryItemBase>(GetWidgetFromName(FName(TEXT("InventoryItemIcon"))));

	mSgtLakeVendor = Cast<USgtLakeVenderBase>(GetWidgetFromName(FName(TEXT("SgtLakesKitchenVendor"))));
	mSgtLakeVendor->SetVisibility(ESlateVisibility::Collapsed);

	mCampFire = Cast<UCampFireBase>(GetWidgetFromName(FName(TEXT("UICampFire"))));
	mCampFire->SetVisibility(ESlateVisibility::Collapsed);

	mEquipment = Cast<UEquipmentBase>(GetWidgetFromName(FName(TEXT("UIEquipment"))));
	mEquipment->SetVisibility(ESlateVisibility::Collapsed);

	mPlaceholder = Cast<UPlaceholderBase>(GetWidgetFromName(FName(TEXT("UIPlaceholder"))));
	mPlaceholder->SetVisibility(ESlateVisibility::Collapsed);

	mRandomBox = Cast<URandomBoxBase>(GetWidgetFromName(FName(TEXT("UIRandomBox"))));
	mRandomBox->SetVisibility(ESlateVisibility::Collapsed);

	mEncyclopedia = Cast<UEncyclopediaBase>(GetWidgetFromName(FName(TEXT("UIEncyclopedia"))));
	mEncyclopedia->SetVisibility(ESlateVisibility::Collapsed);

	mCraftTable = Cast<UCraftTableBase>(GetWidgetFromName(FName(TEXT("UICraftTable"))));
	mCraftTable->SetVisibility(ESlateVisibility::Collapsed);
}

void UMainHUDBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
	if (mOnceCheck == false)
	{
		Character->OnActorClickedEvent.AddUObject(this, &UMainHUDBase::OnActorClicked);
		Character->OnInventoryOnOffEvent.AddUObject(this, &UMainHUDBase::OnInventoryOnOff);
		mOnceCheck = true;
	}

	if (IsValid(Character))
	{
		UCharacterMovementComponent* MovementComponent = Character->GetCharacterMovement();
		bool isMoving = MovementComponent->Velocity.Size() > 0;
		if (isMoving)
		{
			if (mCampFire->IsVisible())
			{
				TArray<int32> AllItems = Character->GetCraftComponent()->GetCraftItems();
				for (int32 Item : AllItems)
				{
					Character->GetInventoryComponent()->ServerAddItem(Item);
				}
				Character->GetCraftComponent()->ServerClear();
				mCampFire->SetVisibility(ESlateVisibility::Collapsed);
				mCampFire->GetEatImg()->SetVisibility(ESlateVisibility::Collapsed);
			}

			if (mSgtLakeVendor->IsVisible())
				mSgtLakeVendor->SetVisibility(ESlateVisibility::Collapsed);

			if(mEquipment->IsVisible())
				mEquipment->SetVisibility(ESlateVisibility::Collapsed);

			if (mPlaceholder->IsVisible())
				mPlaceholder->SetVisibility(ESlateVisibility::Collapsed);

			if (mRandomBox->IsVisible())
				mRandomBox->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UMainHUDBase::OnActorClicked(AActor* Actor)
{
	if (IsValid(Actor) == false)
		return;

	if (Actor->IsA<AVendorBase>())
	{
		mSgtLakeVendor->SetVisibility(ESlateVisibility::Visible);
		mInventory->SetVisibility(ESlateVisibility::Visible);
	}
	else if (Actor->IsA<ACampFire>())
	{
		mCampFire->SetVisibility(ESlateVisibility::Visible);
		mInventory->SetVisibility(ESlateVisibility::Visible);
	}
}

void UMainHUDBase::OnInventoryOnOff()
{
	int CurTime = 0;
	float CurPartical = 0.f;
	UGameplayStatics::GetAccurateRealTime(CurTime, CurPartical);

	if (CurTime - mPrevTime < 1)
		return;

	mPrevTime = CurTime;

	if (mInventory->IsVisible())
		mInventory->SetVisibility(ESlateVisibility::Collapsed);
	else
		mInventory->SetVisibility(ESlateVisibility::Visible);

	if (mEquipment->IsVisible())
		mEquipment->SetVisibility(ESlateVisibility::Collapsed);

	if (mRandomBox->IsVisible())
		mRandomBox->SetVisibility(ESlateVisibility::Collapsed);

	if(mPlaceholder->IsVisible())
		mPlaceholder->SetVisibility(ESlateVisibility::Collapsed);
}