// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatic.h"

void Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    //Find the distance to the tank
    if(Tank)
    {
        float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());

        //Check if tank in range
        if(Distance <= FireRange)
        {
            RotateTurret(Tank->GetActorLocation())
        }

        //If in range, rotate tower to tank
    }
    

}


void ATower::BeginPlay()
{
    Super::BeginPlay();

    Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

