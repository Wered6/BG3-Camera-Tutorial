// Copyright Epic Games, Inc. All Rights Reserved.

#include "BG3CameraGameMode.h"
#include "BG3CameraCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABG3CameraGameMode::ABG3CameraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
