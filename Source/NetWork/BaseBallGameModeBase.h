#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseBallGameModeBase.generated.h"

UCLASS()
class NETWORK_API ABaseBallGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
    ABaseBallGameModeBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseBall")
	TArray<int32> Score;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseBall")
	FString AllScore;
protected:
	virtual void BeginPlay();
};