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
		// 입력된 데이터에 들어있는 값으로 InventoryItem 이 초기화 된다.	
		const FString& IconPath = pData->GetItemIconPath();

		// 데이터에 들어있던 IconPath 를 이용해서 해당 텍스쳐를 로딩 후, 
		// Image 위젯에 해당 텍스쳐를 설정해준다.
		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			m_IconImg->SetBrushFromTexture(pTex2D);
		}
	}
}
