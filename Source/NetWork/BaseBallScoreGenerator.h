#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseBallScoreGenerator.generated.h"

UCLASS()
class NETWORK_API UBaseBallScoreGenerator : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Baseball Game")
	static TArray<int32> GenerateRandomNumber();

};
