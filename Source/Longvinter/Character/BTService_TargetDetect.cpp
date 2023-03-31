// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_TargetDetect.h"
#include "MonsterAIController.h"
#include "ChickenBase.h"

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
		return;

	FCollisionQueryParams	param(NAME_None, false, Chicken);

	TArray<FOverlapResult>	ResultArray;

	bool CollisionEnable = GetWorld()->OverlapMultiByChannel(ResultArray,
		Chicken->GetActorLocation(), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel8,
		FCollisionShape::MakeSphere(800),
		param);

#if ENABLE_DRAW_DEBUG

	// CollisionEnable 가 true이면 Red, false이면 Green을 저장한다.
	FColor	DrawColor = CollisionEnable ? FColor::Red : FColor::Green;

	// FRotationMatrix::MakeFromZ(GetActorForwardVector()) : 앞쪽을
	// 바라보는 회전행렬을 만들어서 .ToQuat() 함수를 이용하여 회전행렬을
	// 회전값으로 변환해준다.
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

