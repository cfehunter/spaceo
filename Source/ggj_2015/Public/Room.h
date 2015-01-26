// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Room.generated.h"

UENUM(BlueprintType)
namespace EDirection
{
	enum Type
	{
		Invalid = 0 UMETA(DisplayName = "Invalid"),
		North = 1 UMETA(DisplayName = "North"),
		South = 2 UMETA(DisplayName = "South"),
		NS = 3 UMETA(DisplayName = "North, South"),
		East = 4 UMETA(DisplayName = "East"),
		NE = 5 UMETA(DisplayName = "North, East"),
		SE = 6 UMETA(DisplayName = "South, East"),
		NSE = 7 UMETA(DisplayName = "North, South, East"),
		West = 8 UMETA(DisplayName = "West"),
		NW = 9 UMETA(DisplayName = "North, West"),
		SW = 10 UMETA(DisplayName = "South, West"),
		NSW = 11 UMETA(DisplayName = "North, South, West"),
		EW = 12 UMETA(DisplayName = "East, West"),
		WEN = 13 UMETA(DisplayName = "West, East, North"),
		SEW = 14 UMETA(DisplayName = "South, East, West"),
		NSEW = 15 UMETA(DisplayName = "North, South, East, West")		
	};
}

USTRUCT()
struct FootprintColumn
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Column")
	TArray<bool> Tiles;
};

/**
 * 
 */
UCLASS()
class GGJ_2015_API ARoom : public AActor
{
	GENERATED_BODY()

public:
	//Mesh Component
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Room" )
	UStaticMeshComponent* StaticMesh;	
	
	//Doors
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
	TEnumAsByte<EDirection::Type> DoorDirections;

	//Footprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
	TArray<FootprintColumn> Footprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room")
		uint32 HasBeenExplored;

	ARoom(const FObjectInitializer& objectInitialiser);

	bool hasDoor(EDirection::Type direction);
	
};
