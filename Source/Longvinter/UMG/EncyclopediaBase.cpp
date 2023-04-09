// Fill out your copyright notice in the Description page of Project Settings.


#include "EncyclopediaBase.h"
#include "../Character/LvPlayer.h"
#include "../Component/InventoryComponent.h"
#include "../Inventory/Inventory.h"
#include "Net/UnrealNetwork.h"
#include "ItemDataBase.h"

void UEncyclopediaBase::NativeConstruct()
{
	Super::NativeConstruct();

	mListView = Cast<UListView>(GetWidgetFromName(FName(TEXT("ListView"))));

	mOnceCheck = false;
}

void UEncyclopediaBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (mOnceCheck == false)
	{
		APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		if (IsValid(Character))
		{
			UInventoryComponent* Component = Character->GetInventoryComponent();
			Component->OnItemsChangedEvent.AddUObject(this, &UEncyclopediaBase::OnItemsChanged);
			OnItemsChanged(Component->GetItems());
			mOnceCheck = true;
		}
	}
}

void UEncyclopediaBase::OnItemsChanged(TArray<int32> Items)
{
	int LastIndex = Items.Num() - 1;

	if (LastIndex == -1)
		return;

	int LastItemID = Items[LastIndex];

	if (LastItemID == -1)
		return;

	for (int32 CurItem : mItems)
	{
		if (CurItem == LastItemID)
			return;
	}

	mItems.Add(LastItemID);

	FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(LastItemID);
	UItemDataBase* pNewData = NewObject<UItemDataBase>();
	pNewData->SetItemIconPath(Table->TexturePath);
	pNewData->SetItemName(Table->ItemName.ToString());
	pNewData->SetItemDesc(Table->TextDescription);

	TArray<UObject*> AllItems = mListView->GetListItems();
	mListView->ClearListItems();
	mListView->AddItem(pNewData);

	for (auto* Item : AllItems)
	{
		mListView->AddItem(Item);
	}

	FTimerHandle DestroyTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, FTimerDelegate::CreateUObject(this, &UEncyclopediaBase::OnDestroyTimerExpired), 2.f, false);
}

void UEncyclopediaBase::OnDestroyTimerExpired()
{
	int32 Index = mListView->GetNumItems() - 1;
	UObject* Item = mListView->GetItemAt(Index);
	mListView->RemoveItem(Item);
}