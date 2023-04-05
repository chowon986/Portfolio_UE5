// Fill out your copyright notice in the Description page of Project Settings.


#include "EncyclopediaBookItemBase.h"
#include "ItemDataBase.h"

void UEncyclopediaBookItemBase::NativeConstruct()
{
	Super::NativeConstruct();
	mIconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("Icon"))));
}

void UEncyclopediaBookItemBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UEncyclopediaBookItemBase::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		const FString& IconPath = pData->GetItemIconPath();
		EItemType Type = pData->GetItemType();

		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			mIconImg->SetBrushFromTexture(pTex2D);
		}
	}
}
