#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BaseBallPlayerController.generated.h"

UCLASS()
class NETWORK_API ABaseBallPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void ClientReceiveChatMessage(const FString& Message);

	virtual void BeginPlay();
protected:

};
