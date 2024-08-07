#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UGrabber::BeginPlay()
{
    Super::BeginPlay();

    // Logging to ensure BeginPlay is called
    UE_LOG(LogTemp, Warning, TEXT("Grabber Component Initialized on %s"), *GetOwner()->GetName());
}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    FVector Start = GetComponentLocation();
    FVector End = Start + GetForwardVector() * MaxGrabDistance;
    DrawDebugLine(GetWorld(), Start, End, FColor::Red);

    FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
    FHitResult HitResult;
    bool HasHit = GetWorld()->SweepSingleByChannel(HitResult, 
    Start, End, 
    FQuat::Identity, 
    ECC_GameTraceChannel2,
    Sphere
    );

    if(HasHit)
    {
        AActor* HitActor = HitResult.GetActor();
        UE_LOG(LogTemp, Display, TEXT("Hit Actor: %s"), *HitActor->GetActorNameOrLabel());
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("No Actor hit"));
    }
}
