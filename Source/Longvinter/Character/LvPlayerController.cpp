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
		// 생성한 객체의 주소를 m_MainHUD 에 받아둔다.
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

		// 이걸 나중에 하나로 묶어야할듯
		AMushroom* Mushroom = Cast<AMushroom>(result.GetActor());
		if (IsValid(Mushroom))
		{
			ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetCharacter());
			PlayerCharacter->ServerAddInventoryItem(149);
			Mushroom->Destroy();
		}

	}
}

void ALvPlayerController::UseTool(/*사용중인 아이템 넘겨줘야 함*/)
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
	//	//if(/*사용중인 아이템이 A면*/)
	//	
	//	// 그리고 그게 나무면
	//	//AWoodBase* Wood = Cast<AWoodBase>(result.GetActor());
	//	// 아이템 테이블에서 해당 아이템 정보를 가져오고
	//	// Wood->TakeDamage(데미지만큼 마이너스)
	//	
	//	// 그게 닭이면
	//	// AChickenBase* Chicken = Cast<AChickenBase>(result.GetActor());
	//	// Chicken->TakeDamage(데미지만큼 마이너스)
	//}
}
