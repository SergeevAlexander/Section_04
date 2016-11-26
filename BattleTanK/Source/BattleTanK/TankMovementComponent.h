// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

/**
 * 
 */

class UTankTrack;

UCLASS( ClassGroup = (Custom), meta = (BlueprintSpawnableComponent) )
class BATTLETANK_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "AAA")
	void IntendMoveForward(float Throw);

	UFUNCTION(BlueprintCallable, Category = "AAA")
	void Initialize(UTankTrack* LeftTrackToSet, UTankTrack* RightTrackToSet);

protected:



private:
	
	UTankTrack* LeftTrack;

	UTankTrack* RightTrack;
};
