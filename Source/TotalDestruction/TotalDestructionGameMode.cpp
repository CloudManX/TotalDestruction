// Copyright Epic Games, Inc. All Rights Reserved.

#include "TotalDestructionGameMode.h"
#include "TotalDestructionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATotalDestructionGameMode::ATotalDestructionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
