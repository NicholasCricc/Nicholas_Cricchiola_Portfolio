#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
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

    UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
    if(PhysicsHandle != nullptr)
    {
        UE_LOG(LogTemp, Display, TEXT("Got Physics Handle : %s"), *PhysicsHandle->GetName());
        
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("We do not have the physics handle"));
    }

}

// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
    if(PhysicsHandle == nullptr)
    {
        return;
    }
    
}

void UGrabber::Release()
{
    UE_LOG(LogTemp, Display, TEXT("Released grabber"));
}

void UGrabber::Grab()
{
    UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
    if(PhysicsHandle == nullptr)
    {
        return;
    }

    FVector Start = GetComponentLocation();
    FVector End = Start + GetForwardVector() * MaxGrabDistance;
    DrawDebugLine(GetWorld(), Start, End, FColor::Red);
    DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5);

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
        PhysicsHandle->GrabComponentAtLocationWithRotation(
            HitResult.GetComponent(), 
            NAME_None, 
            HitResult.ImpactPoint, 
            HitResult.GetComponent()->GetComponentRotation());

        /* This code is to draw spheres to showcase hitting something to click on it
        DrawDebugSphere(GetWorld(), HitResult.Location, 10, 10, FColor::Green, false, 5);
        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 10, 10, FColor::Red, false, 5);
        AActor* HitActor = HitResult.GetActor();
        
        UE_LOG(LogTemp, Display, TEXT("Hit Actor: %s"), *HitActor->GetActorNameOrLabel());
        */
    }
}
