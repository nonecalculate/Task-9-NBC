#include "BaseBallGameModeBase.h"
#include "BaseBallPlayerController.h"
#include "BaseBallGameStateBase.h"
#include "BaseBallScoreGenerator.h"
#include "UserCharacter.h"

using namespace std;

ABaseBallGameModeBase::ABaseBallGameModeBase()
{
	DefaultPawnClass = AUserCharacter::StaticClass();

	PlayerControllerClass = ABaseBallPlayerController::StaticClass();

	GameStateClass = ABaseBallGameStateBase::StaticClass();
}

void ABaseBallGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	Score = UBaseBallScoreGenerator::GenerateRandomNumber();
}


