#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BaseBallGameStateBase.generated.h"

UCLASS()
class NETWORK_API ABaseBallGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
	ABaseBallGameStateBase();

protected:
	virtual void BeginPlay();
};
