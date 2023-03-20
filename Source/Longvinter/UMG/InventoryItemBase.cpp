// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryItemBase.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayerController.h"

void UInventoryItemBase::NativeConstruct()
{
	Super::NativeConstruct();
	m_IconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("Icon"))));
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
		// �Էµ� �����Ϳ� ����ִ� ������ InventoryItem �� �ʱ�ȭ �ȴ�.	
		const FString& IconPath = pData->GetItemIconPath();

		// �����Ϳ� ����ִ� IconPath �� �̿��ؼ� �ش� �ؽ��ĸ� �ε� ��, 
		// Image ������ �ش� �ؽ��ĸ� �������ش�.
		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			m_IconImg->SetBrushFromTexture(pTex2D);
		}
	}
}
