// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RollaBallWidget.generated.h"

/**
 * UUserWidget��
 * UnrealEngine��UI���쐬���邽�߂̗v�f
 */
UCLASS()
class LEARNING1_API URollaBallWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
		
		UFUNCTION(BlueprintImplementableEvent)
		void SetItemText(int32 ItemsCollested, int32 ItemsLevel);

	
};
