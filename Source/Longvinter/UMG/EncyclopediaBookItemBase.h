// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/Image.h>
#include "Blueprint/UserWidget.h"
#include "EncyclopediaBookItemBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UEncyclopediaBookItemBase : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
	void InitFromData(UObject* _Data);

	UFUNCTION()
	void OnItemsChanged(TArray<int32> Items);

private:
	UImage* mIconImg;
	bool mOnceCheck;
	class UItemDataBase* mData;
};
