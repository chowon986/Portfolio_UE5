// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireItemBase.h"
#include "ItemDataBase.h"


void UCampFireItemBase::NativeConstruct()
{
	Super::NativeConstruct();
	mIconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("CampFireIcon"))));
	mEatImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("EatIcon"))));
	mEatImg->SetVisibility(ESlateVisibility::Collapsed);
}

void UCampFireItemBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UCampFireItemBase::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		// 입력된 데이터에 들어있는 값으로 InventoryItem 이 초기화 된다.	
		const FString& IconPath = pData->GetItemIconPath();

		// 데이터에 들어있던 IconPath 를 이용해서 해당 텍스쳐를 로딩 후, 
		// Image 위젯에 해당 텍스쳐를 설정해준다.
		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			mIconImg->SetBrushFromTexture(pTex2D);

			if(pData->GetItemType() == EItemType::Food)
				mEatImg->SetVisibility(ESlateVisibility::Visible);
		}
	}
}
