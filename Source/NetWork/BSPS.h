#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BSPS.generated.h"

UCLASS()
class NETWORK_API ABSPS : public APlayerState
{
	GENERATED_BODY()
	
public:
	ABSPS();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	FString PlayerNameString;

	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	int32 CurrentGuessCount;

	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	int32 MaxGuessCount;

};
