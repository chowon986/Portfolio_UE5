// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/ListView.h>
#include "Blueprint/UserWidget.h"
#include "SgtLakeVenderBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API USgtLakeVenderBase : public UUserWidget
{
	GENERATED_BODY()
private:
	UListView* m_ListView;

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

};