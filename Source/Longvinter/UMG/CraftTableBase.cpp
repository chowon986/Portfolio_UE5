// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftTableBase.h"
#include "ItemDataBase.h"
#include "../Inventory/Inventory.h"
#include "../Character/LvPlayer.h"
#include "../Component/InventoryComponent.h"
#include "../Component/DecoComponent.h"

void UCraftTableBase::NativeConstruct()
{
	Super::NativeConstruct();

	mItemName = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemName")));
	mItemName->SetText(FText::FromString("LogCabin"));
	mCurCount = Cast<UTextBlock>(GetWidgetFromName(TEXT("CurCount")));
	mCurCount->SetText(FText::FromString("0"));
	mTotalCount = Cast<UTextBlock>(GetWidgetFromName(TEXT("TotalCount")));
	mTotalCount->SetText(FText::FromString("10"));
	mDepositBtn = Cast<UButton>(GetWidgetFromName(TEXT("DepositBtn")));
	mDepositBtn->OnClicked.AddDynamic(this, &UCraftTableBase::OnClickedDepositBtn);
	mInputTxt = Cast<UTextBlock>(GetWidgetFromName(TEXT("InputTxt")));	

	mReadyTxt = Cast<UTextBlock>(GetWidgetFromName(TEXT("ReadyTxt")));
	mReadyTxt->SetVisibility(ESlateVisibility::Collapsed);
	mReadyBtn = Cast<UButton>(GetWidgetFromName(TEXT("ReadyBtn")));
	mReadyBtn->SetVisibility(ESlateVisibility::Collapsed);
	mUpgradeBtn = Cast<UButton>(GetWidgetFromName(TEXT("UpgradeBtn")));
	mUpgradeBtn->SetVisibility(ESlateVisibility::Collapsed);
	mUpgradeBtn->OnClicked.AddDynamic(this, &UCraftTableBase::OnClickedUpgradeBtn);
	mUpgradeTxt = Cast<UTextBlock>(GetWidgetFromName(TEXT("UpgradeTxt")));
	mUpgradeTxt->SetVisibility(ESlateVisibility::Collapsed);

	mCurWoodCount = 0;
}

void UCraftTableBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UCraftTableBase::OnClickedDepositBtn()
{
	if (mCurWoodCount >= 10)
		return;

	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	if (IsValid(Controller))
	{
		ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(Controller->GetCharacter());

		if (IsValid(PlayerCharacter))
		{
			TArray<int32> Items = PlayerCharacter->GetInventoryComponent()->GetItems();

			for (int32 Item : Items)
			{
				if (Item == 104 || Item == 127) // ³ª¹«¸é
				{
					PlayerCharacter->GetInventoryComponent()->ServerRemoveItem(Item);
					++mCurWoodCount;
					mCurCount->SetText(FText::FromString(FString::FromInt(mCurWoodCount)));

					if (mCurWoodCount == 10)
						break;
				}
			}
		}
	}

	if(mCurWoodCount == 10)
	{
		mReadyTxt->SetVisibility(ESlateVisibility::Visible);
		mUpgradeTxt->SetVisibility(ESlateVisibility::Visible);
		mReadyBtn->SetVisibility(ESlateVisibility::Visible);
		mUpgradeBtn->SetVisibility(ESlateVisibility::Visible);

		mDepositBtn->SetVisibility(ESlateVisibility::Collapsed);
		mInputTxt->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UCraftTableBase::OnClickedUpgradeBtn()
{
	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	if (IsValid(Controller))
	{
		ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(Controller->GetCharacter());

		if (IsValid(PlayerCharacter))
		{
			PlayerCharacter->GetDecoComponent()->ServerCraft();
		}
	}
}
