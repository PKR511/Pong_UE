// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Boundary.generated.h"

class APongModeBase;
UCLASS()
class PONG_API ABoundary : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoundary();

protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Boundary Type", meta =(BlueprintProtected))
	bool IsGoal = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boundary Type", meta = (BlueprintProtected))
	bool IsLeftGoal = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reference", meta = (BlueprintProtected))
	APongModeBase* GameModeRef;
private:
	UPROPERTY(VisibleAnywhere,Category = "Collisions")
	UBoxComponent* Bounds = nullptr;

};
