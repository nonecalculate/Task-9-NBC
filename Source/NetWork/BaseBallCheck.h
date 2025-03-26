#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseBallCheck.generated.h"

USTRUCT(BlueprintType)
struct FBaseBallResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "BaseBall")
	int32 Strike;

	UPROPERTY(BlueprintReadWrite, Category = "BaseBall")
	int32 Ball;

	UPROPERTY(BlueprintReadWrite, Category = "BaseBall")
	int32 Out;
};


UCLASS()
class NETWORK_API UBaseBallCheck : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "BaseBallCheck")
	static FBaseBallResult CheckScore(FString TargetNumber, FString InputNumber);
	UFUNCTION(BlueprintCallable, Category = "BaseBallCheck")
	static bool CheckString(FString InputString);
	
	
};
