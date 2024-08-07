#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"

UCLASS()
class TESTMODULE_API ATestActor : public AActor
{
	GENERATED_BODY()

public:
	ATestActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaticMesh")
	class UStaticMeshComponent* StaticMesh;

protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float DeltaTime) override;
};
