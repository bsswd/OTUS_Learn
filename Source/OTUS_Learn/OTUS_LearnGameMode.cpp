// Copyright Epic Games, Inc. All Rights Reserved.

#include "OTUS_LearnGameMode.h"
#include "OTUS_LearnCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOTUS_LearnGameMode::AOTUS_LearnGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
