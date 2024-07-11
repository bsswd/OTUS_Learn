// OTUS Learn Project. Made by Alex Sinkin (c)

#include "TestActor.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = true;
}


FVector ATestActor::GetActorOnSceneLocation() const
{
	return GetActorLocation();
}


void ATestActor::BeginPlay()
{
	Super::BeginPlay();
}

void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

