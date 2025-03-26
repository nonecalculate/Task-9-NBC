#include "UserCharacter.h"

AUserCharacter::AUserCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AUserCharacter::Turn(const FInputActionValue& value)
{

}

void AUserCharacter::LookUp(const FInputActionValue& value)
{
}

void AUserCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AUserCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (Controller)
    {
        Controller->SetControlRotation(ViewRotation);
    }

}

void AUserCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

