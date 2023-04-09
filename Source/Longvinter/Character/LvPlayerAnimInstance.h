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
	void Aim();
	void Sit();
	void Fishing();

public:
	UFUNCTION()
		void AnimNotify_WaveStart();
	UFUNCTION()
		void AnimNotify_WaveEnd();
	UFUNCTION()
		void AnimNotify_FishingEnd();
	UFUNCTION()
		void AnimNotify_SittingEnd();
	UFUNCTION()
		void AnimNotify_SitWaveEnd();
	UFUNCTION()
		void AnimNotify_GetItemEnd();
	UFUNCTION()
		void AnimNotify_PlaySawSound();

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
		UAnimMontage* mSawAimMontage;
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
	FName mWeaponName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	UAudioComponent* mAudio;
	UPROPERTY(EditAnywhere, Category = "Sound")
	USoundBase* mSound;

	bool IsPlayingSound;
};
