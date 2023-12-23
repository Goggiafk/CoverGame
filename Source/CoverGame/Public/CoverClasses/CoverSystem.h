#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoverSystem.generated.h"

UCLASS()
class COVERGAME_API ACoverSystem : public AActor
{
    GENERATED_BODY()

public:
    ACoverSystem();

    UFUNCTION(BlueprintCallable)
    class ACover* FindBestCoverForCharacter(AActor* Character);

    UFUNCTION(BlueprintCallable)
    bool ReserveCoverForCharacter(AActor* Character, class ACover* Cover);

    UFUNCTION(BlueprintCallable)
    void ReleaseCoverReservation(AActor* Character);

protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<class ACover*> Covers;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<AActor*> ReservedCovers;

    // Add other properties and functions as needed.
};