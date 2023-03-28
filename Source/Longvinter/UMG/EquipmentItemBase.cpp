#include "EquipmentItemBase.h"
#include "ItemDataBase.h"


void UEquipmentItemBase::NativeConstruct()
{
	Super::NativeConstruct();
	mIconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("Icon"))));
}

void UEquipmentItemBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UEquipmentItemBase::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		const FString& IconPath = pData->GetItemIconPath();

		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			mIconImg->SetBrushFromTexture(pTex2D);
		}
	}
}
