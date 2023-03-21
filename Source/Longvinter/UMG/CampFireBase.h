// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/TileView.h>
#include "Blueprint/UserWidget.h"
#include "CampFireBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UCampFireBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

public:
	static UTileView* mCampFireTileView;

private:
	bool OnceCheck;

};