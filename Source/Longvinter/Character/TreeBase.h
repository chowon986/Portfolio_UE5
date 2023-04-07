// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerCharacterBase.h"
#include "NonPlayerActorBase.h"
#include "TreeBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ATreeBase : public ANonPlayerCharacterBase
{
	GENERATED_BODY()

public:
	ATreeBase();

public:
	float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	void OnHealthUpdate() override;

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
	void SpawnItem();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* mStaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	TArray<TSubclassOf<ANonPlayerActorBase>> mItemClassArray;
};
