
#include "CPP_LRL_REMAKE/Public/Items/Item.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_LRL_REMAKE/CPP_LRL_REMAKE.h"


AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	
	SetActorLocation(FVector(0.f, 0.f, 50.f));
	SetActorRotation(FRotator(0.f, 45.f, 0.f));
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + Forward * 100.f)
	//DRAW_POINT(Location + Forward * 100.f)
	DRAW_VECTOR(Location, Location + Forward * 100.f);

	
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

