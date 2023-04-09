// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayerAnimInstance.h"
#include "LvPlayer.h"

ULvPlayerAnimInstance::ULvPlayerAnimInstance()
{
	mMove = false;
	mFishingTime = 0.f;
	mElapsedTime = 0.f;
	mFinishFishing = false;
	mCanFishing = true;
	mCanFishingIntervalTime = 5.f;
	mCanFishingElaspedTime = 0.f;

	mAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));        
	mAudio->bAutoActivate = false;

	IsPlayingSound = false;
}

void ULvPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void ULvPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(TryGetPawnOwner());

	if (!mAudio->IsPlaying())
		IsPlayingSound = false;
	else
		IsPlayingSound = true;

	if (IsValid(PlayerCharacter))
	{
		UCharacterMovementComponent* Movement = PlayerCharacter->GetCharacterMovement();

		mSpeedRatio = Movement->Velocity.Size() / Movement->MaxWalkSpeed;
		mPlayerState = PlayerCharacter->GetState();
		mMove = mSpeedRatio != 0;
		mFinishFishing = PlayerCharacter->GetFinishFishing();

		if (PlayerCharacter->GetState() == EPlayerState::Idle)
		{
			if (IsPlayingSound)
				mAudio->Stop();
		}
	}



	//if (mCanFishing == false)
	//{
	//	mCanFishingElaspedTime += DeltaSeconds;

	//	if (mCanFishingElaspedTime > mCanFishingIntervalTime)
	//	{
	//		mCanFishing = true;
	//		mCanFishingElaspedTime = 0.f;
	//	}
	//}

	//if (mPlayerState == EPlayerState::Fishing && mFishingTime != 0.f)
	//{
	//	mElapsedTime += DeltaSeconds;

	//	if (mFishingTime < mElapsedTime)
	//	{
	//		mPlayerState = EPlayerState::Idle;
	//		mElapsedTime = 0.f;
	//		mFishingTime = 0.f;
	//		mFinishFishing = true;
	//	}
	//}
}

void ULvPlayerAnimInstance::Wave()
{
	if (mPlayerState == EPlayerState::Idle)
	{
		if (!Montage_IsPlaying(mWaveMontage))
		{
			Montage_SetPosition(mWaveMontage, 0.f);
			Montage_Play(mWaveMontage);
		}
	}
}

void ULvPlayerAnimInstance::Aim()
{
	if (!Montage_IsPlaying(mSawAimMontage))
	{
		Montage_SetPosition(mSawAimMontage, 0.f);
		Montage_Play(mSawAimMontage);
	}

	if (mPlayerState == EPlayerState::Aim)
	{
		//if (mWeaponName == "ChainSaw")
		{

		}
		//else if (mWeaponName == "Gun")
		//{
		//	if (!Montage_IsPlaying(mSittingWaveMontage))
		//	{
		//		Montage_SetPosition(mSittingWaveMontage, 0.f);
		//		Montage_Play(mSittingWaveMontage);
		//	}
		//}
	}
}

void ULvPlayerAnimInstance::Sit()
{
	//mPlayerState = EPlayerState::Sit;
}

void ULvPlayerAnimInstance::Fishing()
{
	//if (mPlayerState != EPlayerState::Fishing && mCanFishing == true)
	//{
	//	mPlayerState = EPlayerState::Fishing;

	//	mFinishFishing = false;
	//	mFishingTime = 3.f;
	//}
}

void ULvPlayerAnimInstance::AnimNotify_WaveStart()
{
}

void ULvPlayerAnimInstance::AnimNotify_WaveEnd()
{
}

void ULvPlayerAnimInstance::AnimNotify_FishingEnd()
{
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(TryGetPawnOwner());

	PlayerCharacter->SetState(EPlayerState::Idle);
}

void ULvPlayerAnimInstance::AnimNotify_SittingEnd()
{
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(TryGetPawnOwner());

	PlayerCharacter->SetState(EPlayerState::SitIdle);
}

void ULvPlayerAnimInstance::AnimNotify_SitWaveEnd()
{
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(TryGetPawnOwner());

	PlayerCharacter->SetState(EPlayerState::SitIdle);
}

void ULvPlayerAnimInstance::AnimNotify_GetItemEnd()
{
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(TryGetPawnOwner());

	PlayerCharacter->SetState(EPlayerState::Idle);
}

void ULvPlayerAnimInstance::AnimNotify_PlaySawSound()
{
	if (IsValid(mSound) && IsPlayingSound == false)
	{
		ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(TryGetPawnOwner());

		if (PlayerCharacter->IsEquippedSaw == true)
		{

			IsPlayingSound = true;

			mAudio->SetSound(mSound);
			mAudio->Play();
		}
	}

	//SoundWave'/Game/Sound/Chainsaw/WAV_ChainsawLoop.WAV_ChainsawLoop'
}
