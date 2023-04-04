// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Components/ListView.h>
#include "Blueprint/UserWidget.h"
#include "CraftTableBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UCraftTableBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

public:
	UListView* mListView;
	bool mOnceCheck;
};
