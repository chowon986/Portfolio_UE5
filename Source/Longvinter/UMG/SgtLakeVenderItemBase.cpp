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
		// �Էµ� �����Ϳ� ����ִ� ������ InventoryItem �� �ʱ�ȭ �ȴ�.	
		const FString& IconPath = pData->GetItemIconPath();
		const FString& IconPathRight = pData->GetItemIconPathRight();

		const FString& SellMoney = pData->GetItemDescription();
		const FString& BuyMoney = pData->GetItemDescriptionLeft();

		const int& ItemID = pData->GetItemID();

		// �����Ϳ� ����ִ� IconPath �� �̿��ؼ� �ش� �ؽ��ĸ� �ε� ��, 
		// Image ������ �ش� �ؽ��ĸ� �������ش�.
		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			m_IconImg->SetBrushFromTexture(pTex2D);
			m_IconRightImg->SetBrushFromTexture(pTex2D);
		}

		if (SellMoney != "0") // �Ĵ� �������̸�
		{
			// ���� �������� ���̰�, ������ �������� ������ �ʰ� ����
			m_IconImg->SetVisibility(ESlateVisibility::Visible);
			m_IconRightImg->SetVisibility(ESlateVisibility::Collapsed);

			// ���� �ؽ�Ʈ�� �����, ������ �ؽ�Ʈ�� ���̰� ����
			m_ItemNameLeftTxt->SetVisibility(ESlateVisibility::Hidden);
			m_ItemNameTxt->SetText(FText::FromString(SellMoney));
			m_ItemNameTxt->SetVisibility(ESlateVisibility::Visible);

			// ���� mk�� �����, ������ mk�� ���̰� ����
			m_LeftMK->SetVisibility(ESlateVisibility::Collapsed);
			m_RightMK->SetVisibility(ESlateVisibility::Visible);
		}
		else // ��� �������̸�
		{
			// ���� �������� �����, ������ �������� ���̰� ����
			m_IconImg->SetVisibility(ESlateVisibility::Collapsed);
			m_IconRightImg->SetVisibility(ESlateVisibility::Visible);

			// ���� �ؽ�Ʈ�� ���̰�, ������ �ؽ�Ʈ�� �����
			m_ItemNameTxt->SetVisibility(ESlateVisibility::Hidden);
			m_ItemNameLeftTxt->SetText(FText::FromString(BuyMoney));
			m_ItemNameLeftTxt->SetVisibility(ESlateVisibility::Visible);

			// ���� mk�� ���̰�, ������ mk�� ���� ����
			m_LeftMK->SetVisibility(ESlateVisibility::Visible);
			m_RightMK->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}
