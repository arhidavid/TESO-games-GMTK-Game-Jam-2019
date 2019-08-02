// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Game_NameGameMode.h"
#include "Game_NameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGame_NameGameMode::AGame_NameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
