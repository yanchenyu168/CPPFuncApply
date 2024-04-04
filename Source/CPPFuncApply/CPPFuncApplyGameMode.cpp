// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPFuncApplyGameMode.h"
#include "CPPFuncApplyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPFuncApplyGameMode::ACPPFuncApplyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
