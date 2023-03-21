// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireBase.h"
#include "../Inventory/Inventory.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"

UTileView* UCampFireBase::mCampFireTileView = nullptr;

void UCampFireBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnceCheck = false;
	mCampFireTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("CampFireTileView"))));
}

void UCampFireBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}