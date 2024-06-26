// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkillboxGameMode.h"
#include "SkillboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASkillboxGameMode::ASkillboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
