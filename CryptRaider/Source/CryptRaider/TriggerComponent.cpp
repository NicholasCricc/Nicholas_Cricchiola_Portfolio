#include "TriggerComponent.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"

UTriggerComponent::UTriggerComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("TriggerComponent BeginPlay"));
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (Mover == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("TickComponent: Mover is null"));
        return;
    }

    AActor* Actor = GetAcceptableActor();
    if (Actor != nullptr)
    {
        UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
        if (Component != nullptr)
        {
            Component->SetSimulatePhysics(false);
        }
        Actor->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
        Mover->SetShouldMove(true);
        UE_LOG(LogTemp, Warning, TEXT("TickComponent: Actor attached, Mover set to move"));
    }
    else
    {
        Mover->SetShouldMove(false);
        UE_LOG(LogTemp, Warning, TEXT("TickComponent: No acceptable actor, Mover set to not move"));
    }
}

void UTriggerComponent::SetMover(UMover* NewMover)
{
    if (NewMover == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("SetMover received a null pointer"));
        return;
    }
    
    Mover = NewMover;
    UE_LOG(LogTemp, Warning, TEXT("SetMover called. Mover set to: %s"), *NewMover->GetName());
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    for (AActor* Actor : Actors)
    {
        bool HasAcceptableTag = Actor->ActorHasTag(AcceptableActorTag);
        bool IsGrabbed = Actor->ActorHasTag("Grabbed");
        if (HasAcceptableTag && !IsGrabbed)
        {
            return Actor;
        }
    }

    return nullptr;
}
