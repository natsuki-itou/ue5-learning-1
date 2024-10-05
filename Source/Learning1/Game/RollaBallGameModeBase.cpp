// Fill out your copyright notice in the Description page of Project Settings.


#include "RollaBallGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Learning1/Items/RollaBallItemBase.h"
#include "RollaBallWidget.h"

void ARollaBallGameModeBase::BeginPlay()
{
	TArray<AActor*> Items;

	// GetWorld()で取得したワールド内のARollaBallItemBaseクラスをItems配列に格納している
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARollaBallItemBase::StaticClass(), Items);
	// 
	ItemsInLevel = Items.Num();

	if (GameWidgetClass) {
		GameWidget = Cast<URollaBallWidget>(CreateWidget(GetWorld(), GameWidgetClass));

		if (GameWidget) {
			GameWidget->AddToViewport();
			UpdateItemText();
		}
	}


}

void ARollaBallGameModeBase::UpdateItemText()
{
}

void ARollaBallGameModeBase::ItemCollected()
{
	ItemsCollected++;
}
