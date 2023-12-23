#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cover.generated.h"

UENUM(BlueprintType)
enum class ECoverSide : uint8
{
	None,
	Top,
	Right,
	Bottom,
	Left
};

UCLASS()
class COVERGAME_API ACover : public AActor
{
	GENERATED_BODY()

public:
	ACover();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECoverSide Side;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsOccupied;

	UFUNCTION(BlueprintCallable)
	bool IsCoverAvailable();

	UFUNCTION(BlueprintCallable)
	bool ProvidesProtection(AActor* Character);

	UFUNCTION(BlueprintCallable)
	bool CanShootFromCover(AActor* Character, FVector ShootDirection);
};