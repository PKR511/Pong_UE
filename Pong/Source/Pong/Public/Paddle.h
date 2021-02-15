// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteComponent.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "Paddle.generated.h"

class ABall;
UCLASS()
class PONG_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess))
	UBoxComponent* Collider = nullptr;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite" )
	UPaperSpriteComponent* PaddleSprite = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "float", meta = (BlueprintProtected))
	float MoveSpeed = 10.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (BlueprintProtected))
	ABall* BallRef = nullptr;



	
	

};
