// Fill out your copyright notice in the Description page of Project Settings.

#include "ggj_2015.h"
#include "Room.h"
#include "Engine.h"





ARoom::ARoom(const FObjectInitializer& objectInitialiser)
	: Super( objectInitialiser )
{
	StaticMesh = objectInitialiser.CreateDefaultSubobject<UStaticMeshComponent>(this, "StaticMesh1");
	StaticMesh->bVisible = true;	
	StaticMesh->AttachParent = RootComponent;	
	RootComponent = StaticMesh;		
}

bool ARoom::hasDoor(EDirection::Type direction)
{
	return(direction & DoorDirections) > 0;
}
