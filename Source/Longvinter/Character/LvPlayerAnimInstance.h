// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Animation/AnimInstance.h"
#include "LvPlayerAnimInstance.generated.h"

enum class EPlayerState : uint8;

UCLASS()
class LONGVINTER_API ULvPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	ULvPlayerAnimInstance();

public:
	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public:
	void Wave();
	void Sit();
	void Fishing();

public:
	UFUNCTION()
		void AnimNotify_WaveStart();
	UFUNCTION()
		void AnimNotify_WaveEnd();
	UFUNCTION()
		void AnimNotify_FishingEnd();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		float	mSpeedRatio;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		bool	mMove;	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		bool	mSit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		UAnimMontage* mWaveMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		UAnimMontage* mSittingWaveMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		EPlayerState mPlayerState;
	


public:
	float mElapsedTime;
	float mFishingTime;
	float mCanFishingIntervalTime;
	float mCanFishingElaspedTime;
	bool mCanFishing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	bool mFinishFishing;

};
