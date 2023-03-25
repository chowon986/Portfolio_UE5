// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryItemBase.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayerController.h"

void UInventoryItemBase::NativeConstruct()
{
	Super::NativeConstruct();
	m_IconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("Icon"))));

	mEatImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("EatIcon"))));
	mEatImg->SetVisibility(ESlateVisibility::Collapsed);

	UWidgetBlueprintGeneratedClass* WidgetClass = GetWidgetTreeOwningClass();

	for (int i = 0; i < WidgetClass->Animations.Num(); ++i)
	{
		FString name = WidgetClass->Animations[i]->GetName();
		mMapWidgetAnimation.Add(name, WidgetClass->Animations[i]);
	}
}

void UInventoryItemBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UInventoryItemBase::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		// 입력된 데이터에 들어있는 값으로 InventoryItem 이 초기화 된다.	
		const FString& IconPath = pData->GetItemIconPath();
		EItemType Type = pData->GetItemType();

		// 데이터에 들어있던 IconPath 를 이용해서 해당 텍스쳐를 로딩 후, 
		// Image 위젯에 해당 텍스쳐를 설정해준다.
		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			m_IconImg->SetBrushFromTexture(pTex2D);

			if (Type == EItemType::Food)
				mEatImg->SetVisibility(ESlateVisibility::Visible);
			else
				mEatImg->SetVisibility(ESlateVisibility::Collapsed);

		}
	}
}

void UInventoryItemBase::PlayWidgetAnimation(FString AnimationName)
{
	UWidgetAnimation* pAnim = mMapWidgetAnimation.FindRef(AnimationName);
	if (IsValid(pAnim))
	{
		PlayAnimation(pAnim);
	}
}
