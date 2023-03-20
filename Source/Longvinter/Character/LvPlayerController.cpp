// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayerController.h"
#include "FishingSpot.h"
#include "VendorBase.h"
#include "LvPlayer.h"
#include "ChickenBase.h"
#include "../Inventory/Inventory.h"
#include "Mushroom.h"

ALvPlayerController::ALvPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	bEnableClickEvents = true;

	static ConstructorHelpers::FClassFinder<UUserWidget>
		finder(TEXT("WidgetBlueprint'/Game/UMG/UIMainHUD.UIMainHUD_C'"));
	if (finder.Succeeded())
	{
		m_MainHUDClass = finder.Class;
	}
}

void ALvPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameAndUI	Mode;
	SetInputMode(Mode);
	bShowMouseCursor = true;

	if (IsValid(m_MainHUDClass) && IsLocalController() == true)
	{
		// ������ ��ü�� �ּҸ� m_MainHUD �� �޾Ƶд�.
		m_MainHUD = Cast<UMainHUDBase>(CreateWidget(GetWorld(), m_MainHUDClass));
		if (IsValid(m_MainHUD))
		{
			m_MainHUD->AddToViewport();
			SetMainHUD(m_MainHUD);
		}
	}
}

void ALvPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALvPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void ALvPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ALvPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void ALvPlayerController::OnUnPossess()
{
	Super::OnUnPossess();
}

void ALvPlayerController::Click()
{
	FHitResult result;
	bool Hit = GetHitResultUnderCursor(ECollisionChannel::ECC_GameTraceChannel3, false, result);

	if (Hit)
	{
		AFishingSpot* Spot = Cast<AFishingSpot>(result.GetActor());

		if (IsValid(Spot))
		{
			ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetCharacter());
			if (IsValid(PlayerCharacter))
			{
				if (PlayerCharacter->GetCanFishing() == true)
				{
					PlayerCharacter->Fishing();
				}
			}

			return;
		}
		
		AVendorBase* Vendor = Cast<AVendorBase>(result.GetActor());
		if (IsValid(Vendor))
		{
			ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetCharacter());
			
			//Vendor->ShopOnOff(true);

			PrintViewport(1.f, FColor::Red, TEXT("ClickVendor"));

			return;
		}

		// �̰� ���߿� �ϳ��� ������ҵ�
		AMushroom* Mushroom = Cast<AMushroom>(result.GetActor());
		if (IsValid(Mushroom))
		{
			ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetCharacter());
			PlayerCharacter->ServerAddInventoryItem(149);
			Mushroom->Destroy();
		}

	}
}

void ALvPlayerController::UseTool(/*������� ������ �Ѱ���� ��*/)
{
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetCharacter());

	if(IsValid(PlayerCharacter))
	PlayerCharacter->TakeDamage(1.f, FDamageEvent(), PlayerCharacter->GetController(), this);

	//FHitResult result;
	//bool Hit = GetHitResultUnderCursor(ECollisionChannel::ECC_GameTraceChannel3, false, result);

	//if (Hit)
	//{
	//	AChickenBase* Chicken = Cast<AChickenBase>(result.GetActor());
	//	Chicken->TakeDamage()
	//	//if(/*������� �������� A��*/)
	//	
	//	// �׸��� �װ� ������
	//	//AWoodBase* Wood = Cast<AWoodBase>(result.GetActor());
	//	// ������ ���̺��� �ش� ������ ������ ��������
	//	// Wood->TakeDamage(��������ŭ ���̳ʽ�)
	//	
	//	// �װ� ���̸�
	//	// AChickenBase* Chicken = Cast<AChickenBase>(result.GetActor());
	//	// Chicken->TakeDamage(��������ŭ ���̳ʽ�)
	//}
}
