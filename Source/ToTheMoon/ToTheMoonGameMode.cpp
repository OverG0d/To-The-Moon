// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToTheMoonGameMode.h"
#include "ToTheMoonHUD.h"
#include "ToTheMoonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToTheMoonGameMode::AToTheMoonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AToTheMoonHUD::StaticClass();
}
