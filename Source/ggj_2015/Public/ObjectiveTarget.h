// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ObjectiveTarget.generated.h"

/**
 * 
 */
UCLASS()
class GGJ_2015_API AObjectiveTarget : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Objective")
	UStaticMeshComponent* StaticMesh;

	AObjectiveTarget(const FObjectInitializer& objectInitialiser);
	
	
};
