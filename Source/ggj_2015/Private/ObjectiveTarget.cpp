// Fill out your copyright notice in the Description page of Project Settings.

#include "ggj_2015.h"
#include "ObjectiveTarget.h"



AObjectiveTarget::AObjectiveTarget(const FObjectInitializer& objectInitialiser) :
Super(objectInitialiser) {
	StaticMesh = objectInitialiser.CreateDefaultSubobject<UStaticMeshComponent>(this, "StaticMesh1");
	StaticMesh->bVisible = true;
	StaticMesh->AttachParent = RootComponent;
	RootComponent = StaticMesh;
}
