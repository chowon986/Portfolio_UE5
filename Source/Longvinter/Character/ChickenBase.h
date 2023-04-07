// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "NonPlayerCharacterBase.h"
#include "ChickenBase.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EChickenState : uint8
{
	Idle,
	Walk,
	RunAway,
};

UCLASS()
class LONGVINTER_API AChickenBase : public ANonPlayerCharacterBase
{
	GENERATED_BODY()	

public:
	AChickenBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

public:
	float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void Tick(float DeltaTime) override;

	void OnHealthUpdate() override;

	void SetCurrentHealth(float healthValue);

	virtual void PossessedBy(AController* NewController);
	virtual void UnPossessed();

	void RunAway();
	void Idle();
	void Walk();
	void PlayFootAnimation();

	EChickenState GetState() { return mCurState; }
	void SetState(EChickenState State);

	UFUNCTION()
	void OnRep_CurState();

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* mBodyStaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* mFootStaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	TSubclassOf<ANonPlayerActorBase> mItemClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	UStaticMesh* mRunMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	UStaticMesh* mIdleMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	float mIntervalTime;
	float mElapsedTime;
	int32 mPitch;

	UPROPERTY(ReplicatedUsing = OnRep_CurState)
	EChickenState mCurState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StaticMesh, meta = (AllowPrivateAccess = true))
	float mChangeDirectionIntervalTime;
	float mChangeDirectionElapsedTime;

	UPROPERTY(EditAnywhere)
	USoundBase* mRunSound;
	UPROPERTY(EditAnywhere)
	USoundBase* mDeathSound;
};