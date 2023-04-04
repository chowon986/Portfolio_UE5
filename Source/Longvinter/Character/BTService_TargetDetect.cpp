// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_TargetDetect.h"
#include "MonsterAIController.h"
#include "ChickenBase.h"
#include "Terret.h"

UBTService_TargetDetect::UBTService_TargetDetect()
{
	NodeName = TEXT("TargetDetect");
	Interval = 2.0f;
	RandomDeviation = 0.1f;
}

void UBTService_TargetDetect::TickNode(
	UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,
	float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AMonsterAIController* AIController =
		Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (!IsValid(AIController))
		return;

	AChickenBase* Chicken = Cast<AChickenBase>(AIController->GetPawn());

	if (!IsValid(Chicken))
	{
		ATerret* Terret = Cast<ATerret>(AIController->GetPawn());

		if (IsValid(Terret))
		{
			FCollisionQueryParams	param(NAME_None, false, Terret);

			TArray<FOverlapResult>	ResultArray;

			bool CollisionEnable = GetWorld()->OverlapMultiByChannel(ResultArray,
				Terret->GetActorLocation(), FQuat::Identity,
				ECollisionChannel::ECC_GameTraceChannel8,
				FCollisionShape::MakeSphere(800),
				param);

#if ENABLE_DRAW_DEBUG
			FColor	DrawColor = CollisionEnable ? FColor::Red : FColor::Green;

			DrawDebugSphere(GetWorld(), Terret->GetActorLocation(),
				800, 20,
				DrawColor, false, 0.3f);

#endif

			if (CollisionEnable)
				AIController->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), ResultArray[0].GetActor());

			else
			{
				AIController->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), nullptr);
			}
		}

		return;
	}
	
	FCollisionQueryParams	param(NAME_None, false, Chicken);

	TArray<FOverlapResult>	ResultArray;

	bool CollisionEnable = GetWorld()->OverlapMultiByChannel(ResultArray,
		Chicken->GetActorLocation(), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel8,
		FCollisionShape::MakeSphere(800),
		param);

#if ENABLE_DRAW_DEBUG
	FColor	DrawColor = CollisionEnable ? FColor::Red : FColor::Green;
	DrawDebugSphere(GetWorld(), Chicken->GetActorLocation(),
		800, 20,
		DrawColor, false, 0.3f);

#endif

	if (CollisionEnable)
		AIController->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), ResultArray[0].GetActor());

	else
	{
		AIController->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), nullptr);
	}
}