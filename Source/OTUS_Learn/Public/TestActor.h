// OTUS Learn Project. Made by Alex Sinkin (c)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class OTUS_LEARN_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ATestActor();

protected:
	UPROPERTY(EditAnywhere)
	AActor *ActorOnScene;

	UFUNCTION(BlueprintCallable)
	FVector GetActorOnSceneLocation() const;


	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
};
