// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkComponent.h"
#include "../Network/NetworkManager.h"
#include "../Network/PacketQueue.h"
#include "../Network/ReceiveThread.h"
#include "../Network/PacketStream.h"

// Sets default values for this component's properties
UNetworkComponent::UNetworkComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNetworkComponent::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(GetOwner()))
	{
		if (PlayerController->IsLocalController())
		{
			mInst = new CNetworkManager();

				// ...
					// ä�� ������ �����Ѵ�.
				mInst->Connect(TEXT("ChatSession"),
					TEXT("127.0.0.1"), 7070);

				// ä�ÿ� ������ ����
				FThreadInfo* Info = mInst->CreateThread<CReceiveThread>(TEXT("ChatReceive"));

				if (Info)
				{
					((CReceiveThread*)Info->Action)->SetSession(mInst->FindSession(TEXT("ChatSession")));

					FString	QueueName = ((CReceiveThread*)Info->Action)->GetName() + TEXT("_Queue");
					mInst->CreatePacketQueue(QueueName);
					((CReceiveThread*)Info->Action)->SetPacketQueue(mInst->FindPacketQueue(QueueName));
				}

			mQueue = mInst->FindPacketQueue(TEXT("ChatReceive_Queue"));

			mInst->SuspendThread(TEXT("ChatReceive"), false);
		}
	}
}

void UNetworkComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (APlayerController* PlayerController = Cast<APlayerController>(GetOwner()))
	{
		if (PlayerController->IsLocalController())
		{
			// ä�ü��� ������ �����Ѵ�.
			mInst->Close(TEXT("ChatSession"));

			mInst->RemoveThread(TEXT("ChatReceive"));

			mInst->RemoveSession(TEXT("ChatSession"));

			if (!mInst)
				delete mInst;

			if (!mQueue)
				delete mQueue;

		}
	}
	Super::EndPlay(EndPlayReason);
}


// Called every frame
void UNetworkComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (APlayerController* PlayerController = Cast<APlayerController>(GetOwner()))
	{
		if (PlayerController->IsLocalController())
		{
			if (!mQueue->Empty())
			{
				int32	Header, PlayerId, Length;
				uint8	Packet[PACKET_SIZE] = {};

				mQueue->Pop(Header, PlayerId, Length, Packet);

				switch (Header)
				{
				case CPH_MSG:
					CPacketStream	stream;
					stream.SetBuffer(Packet);

					TCHAR	Msg[PACKET_SIZE] = {};

					stream.GetData((void*)Msg, Length);

					PrintViewport(30.f, FColor::Red, Msg);

					OnChatMessageReceivedEvent.Broadcast(Msg, PlayerId);

					break;
				}
			}
		}
	}
}

void UNetworkComponent::Send(const FString& Text, int32 Id)
{
	if (APlayerController* PlayerController = Cast<APlayerController>(GetOwner()))
	{
		// Ŭ���̾�Ʈ�� ���� �� �ְ� üũ
		if (PlayerController->IsLocalController())
		{
			uint8	Packet[PACKET_SIZE] = {};

			CPacketStream	stream;
			stream.SetBuffer(Packet);

			stream.AddData((void*)*Text, Text.Len() * 2);

			// NetworkManager�� send �Լ� ȣ��
			mInst->Send(TEXT("ChatSession"), CPH_MSG, Id, stream.GetLength(), Packet);
			
			// ä���� �Ͼ���� event�� �˸�
			OnChatMessageSentEvent.Broadcast(Text, Id);

			//LOGSTRING(Text);
		}
	}
}

