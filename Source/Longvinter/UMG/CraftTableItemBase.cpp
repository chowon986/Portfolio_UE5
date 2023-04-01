// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftTableItemBase.h"
#include "ItemDataBase.h"

void UCraftTableItemBase::NativeConstruct()
{
	Super::NativeConstruct();

	mItemName = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemName")));
	mItemName->SetText(FText::FromString("통나무집"));
	mCurCount = Cast<UTextBlock>(GetWidgetFromName(TEXT("CurCount")));
	mCurCount->SetText(FText::FromString("0"));
	mTotalCount = Cast<UTextBlock>(GetWidgetFromName(TEXT("TotalCount")));
	mTotalCount->SetText(FText::FromString("100"));
	mItemImg = Cast<UImage>(GetWidgetFromName(TEXT("ItemImg")));
	mDepositBtn = Cast<UButton>(GetWidgetFromName(TEXT("DepositBtn")));
	mDepositBtn->OnClicked.AddDynamic(this, &UCraftTableItemBase::OnClickedDepositBtn);
}

void UCraftTableItemBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UCraftTableItemBase::OnClickedDepositBtn()
{

}

void UCraftTableItemBase::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		const FString& IconPath = pData->GetItemIconPath();

		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			mItemImg->SetBrushFromTexture(pTex2D);
		}
	}
}