// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_RandomState.h"
#include "MonsterAIController.h"
#include "ChickenBase.h"

UBTService_RandomState::UBTService_RandomState()
{
	NodeName = TEXT("RandomState");
	Interval = 1.0f;
	RandomDeviation = 0.1f;
}

void UBTService_RandomState::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AMonsterAIController* AIController =
		Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (!IsValid(AIController))
		return;

	AChickenBase* Chicken = Cast<AChickenBase>(AIController->GetPawn());

	if (IsValid(Chicken))
	{
		int Random = FMath::RandRange(1, 5);

		if (Random < 5)
			AIController->GetBlackboardComponent()->SetValueAsBool(TEXT("IsWalking"), true);
		else
			AIController->GetBlackboardComponent()->SetValueAsBool(TEXT("IsWalking"), false);
	}
}
