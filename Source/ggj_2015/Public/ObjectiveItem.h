// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ObjectiveItem.generated.h"

UCLASS()
class GGJ_2015_API AObjectiveItem : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Objective")
	UStaticMeshComponent* StaticMesh;

	AObjectiveItem(const FObjectInitializer& objectInitialiser);
};
