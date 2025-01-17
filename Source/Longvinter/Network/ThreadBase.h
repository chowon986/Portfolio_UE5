// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"

class LONGVINTER_API CThreadBase : public FRunnable
{
public:
	CThreadBase();
	~CThreadBase();

protected:
	bool	mLoop;
	FString	mName;

public:
	void SetName(const FString& Name)
	{
		mName = Name;
	}

	const FString& GetName() 
	{
		return mName;
	}

	void SetLoop(bool Loop)
	{
		mLoop = Loop;
	}

public:
	virtual bool Init();
	virtual uint32 Run();
	virtual void Stop();
	virtual void Exit();
};
