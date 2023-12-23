#include "CoverClasses/Cover.h"

ACover::ACover()
{
	// Set default values for properties
	Position = FVector::ZeroVector;
	Side = ECoverSide::None;
	bIsOccupied = false;
}

bool ACover::IsCoverAvailable()
{
	return !bIsOccupied;
}

bool ACover::ProvidesProtection(AActor* Character)
{
	// Implement logic to check if the cover provides protection from enemies.
	// You may use collision checks or other mechanisms based on your game's design.
	return true;
}

bool ACover::CanShootFromCover(AActor* Character, FVector ShootDirection)
{
	// Implement logic to check if the character can shoot from this cover in the specified direction.
	// Use the ShootDirection and Cover's properties to determine if shooting is allowed.
	return true;
}