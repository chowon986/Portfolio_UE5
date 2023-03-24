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
		// �Էµ� �����Ϳ� ����ִ� ������ InventoryItem �� �ʱ�ȭ �ȴ�.	
		const FString& IconPath = pData->GetItemIconPath();

		// �����Ϳ� ����ִ� IconPath �� �̿��ؼ� �ش� �ؽ��ĸ� �ε� ��, 
		// Image ������ �ش� �ؽ��ĸ� �������ش�.
		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			mIconImg->SetBrushFromTexture(pTex2D);

			if(pData->GetItemType() == EItemType::Food)
				mEatImg->SetVisibility(ESlateVisibility::Visible);
		}
	}
}
