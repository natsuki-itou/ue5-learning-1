// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RollaBallGameModeBase.generated.h"

class URollaBallWidget;
/**
 * 
 */
UCLASS()
class LEARNING1_API ARollaBallGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:
		 
	int32 ItemsCollected = 0;
	int32 ItemsInLevel = 0;
	
	// TODO - Implemant Widget Variables

	/*
	 * この変数ではClass自体(この場合はUUSerWidgetの内どれか)を指定したいためクラスポインタが不要
	 * 指定したクラスのインスタンスを生成する
	 */ 
	UPROPERTY(EditAnywhere, Category="Widgets")
	TSubclassOf<class UUserWidget> GameWidgetClass;
	
	// この変数では実際にURollaBallWidgetインスタンスを操作したいため、クラスポインタをつける。
	UPROPERTY()
	URollaBallWidget* GameWidget;

	virtual void BeginPlay() override;

	void UpdateItemText();

public:

	void ItemCollected();
};
