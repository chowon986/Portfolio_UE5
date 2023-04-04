// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_CheckWeapon.h"
#include "MonsterAIController.h"
#include "Terret.h"
#include "LvPlayer.h"

UBTService_CheckWeapon::UBTService_CheckWeapon()
{
	NodeName = TEXT("CheckWeapon");
	Interval = 0.5f;
	RandomDeviation = 0.1f;
}

void UBTService_CheckWeapon::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AMonsterAIController* AIController =
		Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (!IsValid(AIController))
		return;

	ATerret* Terret = Cast<ATerret>(AIController->GetPawn());

	if (IsValid(Terret))
	{
		ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(AIController->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (IsValid(PlayerCharacter) && IsValid(PlayerCharacter->mWeapon->GetStaticMesh()))
			AIController->GetBlackboardComponent()->SetValueAsBool(TEXT("WithWeapon"), true);
		else
			AIController->GetBlackboardComponent()->SetValueAsBool(TEXT("WithWeapon"), false);
	}
}
