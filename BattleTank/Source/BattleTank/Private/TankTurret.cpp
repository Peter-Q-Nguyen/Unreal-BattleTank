// Copyright Peter Q Nguyen


#include "TankTurret.h"

void UTankTurret::RotateTurret(float RelativeSpeed)
{
	//Move the turret the right amount this frame
	// Given a max rotation speed, and the time frame


	auto RotationChange = FMath::Clamp(RelativeSpeed, -1.0f, 1.0f) * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewRotation = GetRelativeRotation().Yaw + RotationChange;

	//auto ClampedRotation = FMath::Clamp(RawNewElevation, MinRotationInDegrees, MaxRotationInDegrees);


	SetRelativeRotation(FRotator(0, RawNewRotation, 0));
}