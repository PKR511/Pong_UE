// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Ball.generated.h"

class APaddle;


UCLASS()
class PONG_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();

protected:
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,Category="Hit Response",meta=(BlueprintProtected))
	void HitPaddle(APaddle* Paddle);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Hit Response", meta = (BlueprintProtected))
	void HitBoundary();
private:	
	
	// Sprite for the tank body.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SPrite", meta = (AllowPrivateAccess = "true"))
	UPaperSpriteComponent* Sprite=nullptr;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	USphereComponent* Sphere =nullptr;

};
