// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTService.h"
#include "BTService_CheckWeapon.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UBTService_CheckWeapon : public UBTService
{
	GENERATED_BODY()

public:
	UBTService_CheckWeapon();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
