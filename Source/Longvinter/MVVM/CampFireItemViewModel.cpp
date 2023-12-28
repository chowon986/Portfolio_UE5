// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireItemViewModel.h"
#include "../Character/LvPlayer.h"
#include "../Component/CraftComponent.h"
#include "../UMG/ItemDataBase.h"
#include "../Inventory/Inventory.h"
#include <Blueprint/WidgetBlueprintLibrary.h>

UCampFireItemViewModel::UCampFireItemViewModel()
{
	EatIconCanVisible = false;
}

void UCampFireItemViewModel::SetItemIconBrush(FSlateBrush NewBrush)
{
	UE_MVVM_SET_PROPERTY_VALUE(mItemIconBrush, NewBrush);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetItemIconBrush);
}

void UCampFireItemViewModel::SetItemIconPathRight(FString NewString)
{
}

void UCampFireItemViewModel::SetItemDescription(FString NewString)
{
}

void UCampFireItemViewModel::SetItemDescriptionLeft(FString NewString)
{
}

void UCampFireItemViewModel::SetItemName(FString NewString)
{
}

void UCampFireItemViewModel::SetItemTextDescription(FString NewString)
{
}

void UCampFireItemViewModel::SetEatIconVisibility(bool Visible)
{
	UE_MVVM_SET_PROPERTY_VALUE(EatIconCanVisible, Visible);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetEatIconVisibility);
}



void UCampFireItemViewModel::SetItemTable(FItemTable* Table)
{
	if (mTable != Table)
	{
		mTable = Table;
		FSlateBrush CurBrush;
		CurBrush.SetUVRegion(FBox2D({0,0}, {1,1}));
		CurBrush.DrawAs = ESlateBrushDrawType::Image;
		CurBrush.SetResourceObject(mTable->Texture);
		CurBrush.SetImageSize(FVector2D(32, 32));
		CurBrush.TintColor = FSlateColor(FColor(1.f, 1.f, 1.f, 1.f));

		if (mTable->ItemType == EItemType::Food)
			EatIconCanVisible = true;
		else
			EatIconCanVisible = false;
		//mItemType = Table->ItemType;
		//SetItemName(Table->ItemName.ToString());
		//SetItemTextDescription(Table->TextDescription);
	}
}

void UCampFireItemViewModel::InitFromData(UObject* _Data)
{
	UCampFireItemViewModel* pData = Cast<UCampFireItemViewModel>(_Data);

	if (IsValid(pData))
	{
		FSlateBrush CurBrush;
		CurBrush.SetUVRegion(FBox2D({ 0,0 }, { 1,1 }));
		CurBrush.DrawAs = ESlateBrushDrawType::Image;
		CurBrush.SetResourceObject(pData->mTable->Texture);
		CurBrush.SetImageSize(FVector2D(32, 32));
		CurBrush.TintColor = FSlateColor(FColor(1.f, 1.f, 1.f, 1.f));

		SetItemIconBrush(CurBrush);
		SetEatIconVisibility(pData->EatIconCanVisible);
		
	}
}

