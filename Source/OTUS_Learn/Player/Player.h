// OTUS Learn Project. Made by Alex Sinkin (c)

#pragma once

#include "CoreMinimal.h"
#include "OTUS_Learn/Core/CharacterBase.h"
#include "Player.generated.h"


class USpringArmComponent;
class UCameraComponent;


UCLASS(config=Game)
class APlayer : public ACharacterBase
{
	GENERATED_BODY()


public:
	APlayer();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;


protected:
	virtual void BeginPlay();

public:
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};