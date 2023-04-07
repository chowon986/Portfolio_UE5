// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "ActorBase.h"
#include "NonPlayerActorBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ANonPlayerActorBase : public AActorBase
{
	GENERATED_BODY()

public:
	ANonPlayerActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int32 GetItemID() const { return mItemID; }

	UFUNCTION()
	void SetItemID(int32 ItemID);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* mStaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	UCapsuleComponent* mCapsuleComponent;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	int32 mItemID;
};
