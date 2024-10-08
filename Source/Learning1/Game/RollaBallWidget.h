// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RollaBallWidget.generated.h"

/**
 * UUserWidgetは
 * UnrealEngineでUIを作成するための要素
 */
UCLASS()
class LEARNING1_API URollaBallWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
		
		UFUNCTION(BlueprintImplementableEvent)
		void SetItemText(int32 ItemsCollested, int32 ItemsLevel);

	
};
