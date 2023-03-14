// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"
#include "../LvGameInstance.h"
#include "../LongvinterGameModeBase.h"
#include "../UMG/MainHUDBase.h"
#include "../UMG/InventoryBase.h"
#include "../UMG/ItemDataBase.h"

UWorld* UInventory::mCurWorld = nullptr;


UInventory::UInventory()
{
}

UInventory::~UInventory()
{
}

UInventory* UInventory::GetInst(UWorld* _World)
{
	mCurWorld = _World;

	ULvGameInstance* GameInstance = Cast<ULvGameInstance>(UGameplayStatics::GetGameInstance(mCurWorld));

	if (nullptr == GameInstance->mInventory)
	{
		GameInstance->mInventory = NewObject<UInventory>();
		GameInstance->mInventory->AddToRoot();
	}
	
	return GameInstance->mInventory;
}

UInventory* UInventory::GetInst(UGameInstance* _GameInst)
{
	ULvGameInstance* GameInstance = Cast<ULvGameInstance>(_GameInst);

	if (nullptr == GameInstance->mInventory)
	{
		GameInstance->mInventory = NewObject<UInventory>();
		GameInstance->mInventory->AddToRoot();
	}

	return GameInstance->mInventory;
}

bool UInventory::IsInventoryOpen()
{
	ALongvinterGameModeBase* GameMode = Cast<ALongvinterGameModeBase>(UGameplayStatics::GetGameMode(mCurWorld));

	if (nullptr == GameMode)
		return false;

	UMainHUDBase* MainHUDBase = GameMode->GetMainHUD();
	UInventoryBase* InventoryWidget = MainHUDBase->GetInventoryWidget();

	return InventoryWidget->IsVisible();
}


void UInventory::ShowInventory(bool Show)
{
	int CurTime = 0;
	float CurPartical = 0.f;
	UGameplayStatics::GetAccurateRealTime(CurTime, CurPartical);

	if (CurTime - mPrevTime < 1)
		return;

	mPrevTime = CurTime;
	
	ALongvinterGameModeBase* GameMode = Cast<ALongvinterGameModeBase>(UGameplayStatics::GetGameMode(mCurWorld));

	if (nullptr == GameMode)
		return;

	UMainHUDBase* MainHUDBase = GameMode->GetMainHUD();
	UInventoryBase* InventoryWidet = MainHUDBase->GetInventoryWidget();

	if (Show)
	{
		InventoryWidet->SetVisibility(ESlateVisibility::Visible);

		APlayerController* Controller = mCurWorld->GetFirstPlayerController();

		FInputModeGameAndUI GameAndUIMode;
		Controller->SetInputMode(GameAndUIMode);
		//Controller->bShowMouseCursor = true;
	}
	else
	{
		InventoryWidet->SetVisibility(ESlateVisibility::Hidden);

		APlayerController* Controller = mCurWorld->GetFirstPlayerController();

		FInputModeGameOnly GameOnlyMode;
		Controller->SetInputMode(GameOnlyMode);
		//Controller->bShowMouseCursor = true;
	}
}

void UInventory::SetItemTable(UDataTable* Table)
{
	mItemTable = Table;
}

void UInventory::UpdateItems(TArray<int32> Items)
{
	for (int32 Item : Items)
	{
		FItemTable* Table = GetInfoItem(Item);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);


	}
}

FItemTable* UInventory::GetInfoItem(int ItemID)
{
	FItemTable* ItemInfo = mItemTable->FindRow<FItemTable>(FName(FString::FromInt(ItemID)), nullptr);

	return ItemInfo;
}
