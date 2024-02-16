// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGGameMode.h"
#include "PCGCharacter.h"
#include "UObject/ConstructorHelpers.h"

APCGGameMode::APCGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
