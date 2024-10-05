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
	 * ���̕ϐ��ł�Class����(���̏ꍇ��UUSerWidget�̓��ǂꂩ)���w�肵�������߃N���X�|�C���^���s�v
	 * �w�肵���N���X�̃C���X�^���X�𐶐�����
	 */ 
	UPROPERTY(EditAnywhere, Category="Widgets")
	TSubclassOf<class UUserWidget> GameWidgetClass;
	
	// ���̕ϐ��ł͎��ۂ�URollaBallWidget�C���X�^���X�𑀍삵�������߁A�N���X�|�C���^������B
	UPROPERTY()
	URollaBallWidget* GameWidget;

	virtual void BeginPlay() override;

	void UpdateItemText();

public:

	void ItemCollected();
};
