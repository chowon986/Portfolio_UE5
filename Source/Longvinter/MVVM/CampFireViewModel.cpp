// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireViewModel.h"
#include "../Character/LvPlayer.h"
#include "../Component/CraftComponent.h"
#include "../UMG/ItemDataBase.h"
#include "../Inventory/Inventory.h"
#include "CampFireItemViewModel.h"

UCampFireViewModel::UCampFireViewModel()
{
	UWorld* World = GetWorld();
	if (World)
	{
		ULocalPlayer* LocalPlayer = World->GetFirstLocalPlayerFromController();
		if (LocalPlayer)
		{
			APlayerController* Controller = LocalPlayer->GetPlayerController(GetWorld());
			if (IsValid(Controller))
			{
				ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());

				if (IsValid(Character))
				{
					UCraftComponent* Component = Character->GetCraftComponent();
					Component->OnProgressBarChangedEvent.AddUObject(this, &UCampFireViewModel::OnProgressBarChanged);
					Component->OnItemsChangedEvent.AddUObject(this, &UCampFireViewModel::OnItemsChanged);
					OnProgressBarChanged(0);
					OnItemsChanged(Component->GetCraftItems());
				}
			}
		}
	}
}

void UCampFireViewModel::SetCurrentProgressRatio(float NewCurrentRatio)
{
	if (mCurrentRatio != NewCurrentRatio)
	{
		UE_MVVM_SET_PROPERTY_VALUE(mCurrentRatio, NewCurrentRatio);
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetCurrentProgressRatio);
	}
}

void UCampFireViewModel::SetCurrentItems(const TArray<UCampFireItemViewModel*>& NewCurrentItems)
{
	if (mItems != NewCurrentItems)
	{
		mItems = NewCurrentItems;
	}
}

void UCampFireViewModel::OnProgressBarChanged(float Ratio)
{
	SetCurrentProgressRatio(Ratio);
}

void UCampFireViewModel::OnItemsChanged(TArray<int32> Items)
{
	TArray<UCampFireItemViewModel*> CampFireItemsArray;

	for (int32 Item : Items)
	{
		FItemTable* Table = UInventory::GetInst(GetWorld())->GetInfoItem(Item);
		UCampFireItemViewModel* CampFireViewModel = NewObject<UCampFireItemViewModel>();
		CampFireViewModel->SetItemTable(Table);
		CampFireItemsArray.Add(CampFireViewModel);
	}

	SetCurrentItems(CampFireItemsArray);
	OnItemsChangedDelegate.Broadcast();
}


