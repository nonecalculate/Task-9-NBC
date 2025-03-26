#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UserCharacter.generated.h"


class UCameraComponent;
struct FInputActionValue;

UCLASS()
class NETWORK_API AUserCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AUserCharacter();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

	UFUNCTION()
	void Turn(const FInputActionValue& value);
	UFUNCTION()
	void LookUp(const FInputActionValue& value);
protected:
	virtual void BeginPlay() override;


private:
	FRotator ViewRotation;

	
	
};
