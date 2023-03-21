// Fill out your copyright notice in the Description page of Project Settings.


#include "SgtLakeVenderItemBase.h"
#include "ItemDataBase.h"

void USgtLakeVenderItemBase::NativeConstruct()
{
	Super::NativeConstruct();
	m_IconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("Icon"))));
	m_IconRightImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("RightICon"))));
	m_ItemNameTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("Money"))));
	m_ItemNameLeftTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("LeftMoney"))));
	m_RightMK = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("RightMK"))));
	m_LeftMK = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("LeftMK"))));
}

void USgtLakeVenderItemBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void USgtLakeVenderItemBase::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		// 입력된 데이터에 들어있는 값으로 InventoryItem 이 초기화 된다.	
		const FString& IconPath = pData->GetItemIconPath();
		const FString& IconPathRight = pData->GetItemIconPathRight();

		const FString& SellMoney = pData->GetItemDescription();
		const FString& BuyMoney = pData->GetItemDescriptionLeft();

		const int& ItemID = pData->GetItemID();

		// 데이터에 들어있던 IconPath 를 이용해서 해당 텍스쳐를 로딩 후, 
		// Image 위젯에 해당 텍스쳐를 설정해준다.
		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			m_IconImg->SetBrushFromTexture(pTex2D);
			m_IconRightImg->SetBrushFromTexture(pTex2D);
		}

		if (SellMoney != "0") // 파는 아이콘이면
		{
			// 왼쪽 아이콘은 보이고, 오른쪽 아이콘은 보이지 않게 설정
			m_IconImg->SetVisibility(ESlateVisibility::Visible);
			m_IconRightImg->SetVisibility(ESlateVisibility::Collapsed);

			// 왼쪽 텍스트는 숨기고, 오른쪽 텍스트는 보이게 설정
			m_ItemNameLeftTxt->SetVisibility(ESlateVisibility::Hidden);
			m_ItemNameTxt->SetText(FText::FromString(SellMoney));
			m_ItemNameTxt->SetVisibility(ESlateVisibility::Visible);

			// 왼쪽 mk는 숨기고, 오른쪽 mk는 보이게 설정
			m_LeftMK->SetVisibility(ESlateVisibility::Collapsed);
			m_RightMK->SetVisibility(ESlateVisibility::Visible);
		}
		else // 사는 아이콘이면
		{
			// 왼쪽 아이콘은 숨기고, 오른쪽 아이콘은 보이게 설정
			m_IconImg->SetVisibility(ESlateVisibility::Collapsed);
			m_IconRightImg->SetVisibility(ESlateVisibility::Visible);

			// 왼쪽 텍스트는 보이고, 오른쪽 텍스트는 숨기기
			m_ItemNameTxt->SetVisibility(ESlateVisibility::Hidden);
			m_ItemNameLeftTxt->SetText(FText::FromString(BuyMoney));
			m_ItemNameLeftTxt->SetVisibility(ESlateVisibility::Visible);

			// 왼쪽 mk는 보이게, 오른쪽 mk는 숨김 설정
			m_LeftMK->SetVisibility(ESlateVisibility::Visible);
			m_RightMK->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}
