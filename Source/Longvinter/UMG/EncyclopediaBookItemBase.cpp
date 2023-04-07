// Fill out your copyright notice in the Description page of Project Settings.


#include "EncyclopediaBookItemBase.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"
#include "../Component/EncyclopediaComponent.h"

void UEncyclopediaBookItemBase::NativeConstruct()
{
	Super::NativeConstruct();
	mIconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("Icon"))));


}

void UEncyclopediaBookItemBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (mOnceCheck == false)
	{
		APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		UEncyclopediaComponent* Component = Character->GetEncyclopediaComponent();
		Component->OnItemsChangedEvent.AddUObject(this, &UEncyclopediaBookItemBase::OnItemsChanged);
		OnItemsChanged(Component->GetItems());
		mOnceCheck = true;
	}
}

void UEncyclopediaBookItemBase::InitFromData(UObject* _Data)
{
	mData = Cast<UItemDataBase>(_Data);

	if (IsValid(mData))
	{
		const FString& IconPath = mData->GetItemIconPath();
		EItemType Type = mData->GetItemType();

		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			mIconImg->SetBrushFromTexture(pTex2D);

			APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
			ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
			UEncyclopediaComponent* Component = Character->GetEncyclopediaComponent();
			OnItemsChanged(Component->GetItems());
		}
	}
}

void UEncyclopediaBookItemBase::OnItemsChanged(TArray<int32> Items)
{
	if (!IsValid(mData))
		return;

	int32 ItemID = mData->GetItemID();

	if (Items.Contains(ItemID))
		mIconImg->SetOpacity(1.f);
		else
		mIconImg->SetOpacity(0.5f);
}
