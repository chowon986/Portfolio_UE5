 //Fill out your copyright notice in the Description page of Project Settings.


#include "ReceiveThread.h"
#include "NetworkSession.h"
#include "PacketQueue.h"
#include "NetworkManager.h"

CReceiveThread::CReceiveThread():
	mSession(nullptr),
	mQueue(nullptr)
{
}

CReceiveThread::~CReceiveThread()
{
	mQueue->Clear();
}

bool CReceiveThread::Init()
{
	CThreadBase::Init();

	return true;
}

uint32 CReceiveThread::Run()
{
	do
	{
		if (mSession)
		{
			uint8	Packet[PACKET_SIZE] = {};
			int32	Header, Length;
			int32	PlayerId;

			if (!mSession->Receive(Header, PlayerId, Length, Packet))
				return 0;

			// Queue에 패킷을 넣어준다.
			mQueue->Push(Header, PlayerId, Length, Packet);
		}
	} while (mLoop);

	return 0;
}

void CReceiveThread::Stop()
{
}

void CReceiveThread::Exit()
{
	mLoop = false;
}
