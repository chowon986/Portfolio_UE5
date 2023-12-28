// Fill out your copyright notice in the Description page of Project Settings.


#include "ChatWidgetBase.h"

#include "../Network/NetworkManager.h"
#include "../Network/PacketQueue.h"
#include "../Network/ReceiveThread.h"
#include "../Network/PacketStream.h"

void UChatWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	mSendBtn = Cast<UButton>(GetWidgetFromName(FName(TEXT("SendButton"))));
	mInputText = Cast<UEditableTextBox>(GetWidgetFromName(FName(TEXT("InputText"))));

	// StartBtn �� Ŭ��, ȣ��, ��ȣ�� ��Ȳ�� �߻��� �� ȣ�� ��ų ��������Ʈ ���
	mSendBtn->OnClicked.AddDynamic(this, &UChatWidgetBase::OnSendBtnClicked);

	// ä�� ������ �����Ѵ�.
	CNetworkManager::GetInst()->Connect(TEXT("ChatSession"),
		TEXT("127.0.0.1"), 7070);

	// ä�ÿ� ������ ����
	FThreadInfo* Info = CNetworkManager::GetInst()->CreateThread<CReceiveThread>(TEXT("ChatReceive"));

	if(Info)
		((CReceiveThread*)Info->Action)->SetSession(CNetworkManager::GetInst()->FindSession(TEXT("ChatSession")));

	mQueue = CNetworkManager::GetInst()->FindPacketQueue(TEXT("ChatReceive_Queue"));

	CNetworkManager::GetInst()->SuspendThread(TEXT("ChatReceive"), false);
}

void UChatWidgetBase::NativeDestruct()
{
	Super::NativeDestruct();

	// ä�ü��� ������ �����Ѵ�.
	CNetworkManager::GetInst()->Close(TEXT("ChatSession"));

	CNetworkManager::GetInst()->RemoveThread(TEXT("ChatReceive"));

	CNetworkManager::GetInst()->RemoveSession(TEXT("ChatSession"));
}

void UChatWidgetBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (!mQueue->Empty())
	{
		int32	Header, Length;
		uint8	Packet[PACKET_SIZE] = {};

		mQueue->Pop(Header, Length, Packet);

		switch (Header)
		{
		case CPH_MSG:
			CPacketStream	stream;
			stream.SetBuffer(Packet);

			TCHAR	Msg[PACKET_SIZE] = {};

			stream.GetData((void*)Msg, Length);

			PrintViewport(30.f, FColor::Red, Msg);

			break;
		}
	}
}

void UChatWidgetBase::OnSendBtnClicked()
{
	FString	Text = mInputText->Text.ToString();

	uint8	Packet[PACKET_SIZE] = {};

	CPacketStream	stream;
	stream.SetBuffer(Packet);

	stream.AddData((void*)*Text, Text.Len() * 2);

	CNetworkManager::GetInst()->Send(TEXT("ChatSession"), CPH_MSG, stream.GetLength(), Packet);

	LOGSTRING(Text);
}
