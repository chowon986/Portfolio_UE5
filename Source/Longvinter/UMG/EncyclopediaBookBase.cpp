// Fill out your copyright notice in the Description page of Project Settings.


#include "EncyclopediaBookBase.h"
#include "EncyclopediaBookListBase.h"
#include "ItemDataBase.h"
#include "../Inventory/Inventory.h"

void UEncyclopediaBookBase::NativeConstruct()
{
	Super::NativeConstruct();

	mListView = Cast<UListView>(GetWidgetFromName(FName(TEXT("ListView"))));

	{
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemName(FString(TEXT("Fish")));
		pNewData->SetItemDescriptionLeft(FString(TEXT("0")));
		pNewData->SetItemDescription(FString(TEXT("17")));
		pNewData->AddItem(1);
		pNewData->AddItem(2);
		pNewData->AddItem(3);
		pNewData->AddItem(4);
		pNewData->AddItem(5);
		pNewData->AddItem(6);
		pNewData->AddItem(7);
		pNewData->AddItem(8);
		pNewData->AddItem(9);
		pNewData->AddItem(10);
		pNewData->AddItem(11);
		pNewData->AddItem(12);
		pNewData->AddItem(13);
		pNewData->AddItem(14);
		pNewData->AddItem(15);
		pNewData->AddItem(16);
		pNewData->AddItem(17);

		mListView->AddItem(pNewData);
	}

	{
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemName(FString(TEXT("Feathers & Trophies")));
		pNewData->SetItemDescriptionLeft(FString(TEXT("0")));
		pNewData->SetItemDescription(FString(TEXT("10")));
		pNewData->AddItem(121);
		pNewData->AddItem(122);
		pNewData->AddItem(123);
		pNewData->AddItem(124);
		pNewData->AddItem(140);
		pNewData->AddItem(141);
		pNewData->AddItem(142);
		pNewData->AddItem(143);

		mListView->AddItem(pNewData);
	}

	{
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemName(FString(TEXT("Crops")));
		pNewData->SetItemDescriptionLeft(FString(TEXT("0")));
		pNewData->SetItemDescription(FString(TEXT("13")));
		pNewData->AddItem(314);
		pNewData->AddItem(317);
		pNewData->AddItem(316);
		pNewData->AddItem(315);
		pNewData->AddItem(125);
		pNewData->AddItem(130);
		pNewData->AddItem(117);
		pNewData->AddItem(118);
		pNewData->AddItem(119);
		pNewData->AddItem(144);
		pNewData->AddItem(145);
		pNewData->AddItem(149);
		pNewData->AddItem(168);

		mListView->AddItem(pNewData);
	}

	{
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemName(FString(TEXT("Blueprint")));
		pNewData->SetItemDescriptionLeft(FString(TEXT("0")));
		pNewData->SetItemDescription(FString(TEXT("11")));
		pNewData->AddItem(526);
		pNewData->AddItem(540);
		pNewData->AddItem(308);
		pNewData->AddItem(150);
		pNewData->AddItem(565);
		pNewData->AddItem(419);
		pNewData->AddItem(420);
		pNewData->AddItem(421);
		pNewData->AddItem(422);
		pNewData->AddItem(423);

		mListView->AddItem(pNewData);
	}
}

void UEncyclopediaBookBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}
