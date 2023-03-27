// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "NonPlayerCharacterBase.h"
#include "ChickenBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API AChickenBase : public ANonPlayerCharacterBase
{
	GENERATED_BODY()	

public:
	AChickenBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	virtual void Tick(float DeltaTime) override;

	void OnHealthUpdate() override;

	void SetCurrentHealth(float healthValue);

	virtual void PossessedBy(AController* NewController);
	virtual void UnPossessed();

	void RunAway();
	void Idle();

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* mBodyStaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* mFootStaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	TSubclassOf<ANonPlayerActorBase> mItemClass;
};