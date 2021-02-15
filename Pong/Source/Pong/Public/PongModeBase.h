// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongModeBase.generated.h"

class UGameHUD;
class ABall;
UCLASS()
class PONG_API APongModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
		void IncreaseAIScore();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
		void IncreasePlayerScore();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Logic")
		void SpawnNewBall();
	
	UPROPERTY(BlueprintReadWrite, Category = "Refrence")
	ABall* BallRef;

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Refrence", meta = (BlueprintProtected))
	UGameHUD* GameHUDRef;
	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "float", meta = (BlueprintProtected))
	float Direction = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "float", meta = (BlueprintProtected))
	float BallSpeed = 1400.0f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int PlayerScore = -1;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int AIScore = -1;

	
};
