// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SProjectileMovementComponent.h"

#include "Subsystems/STickablesSubsystem.h"

void USProjectileMovementComponent::InitializeComponent()
{
	// Reset to default for object pooling support
	Velocity = FVector(1,0,0);
	
	Super::InitializeComponent();
}

void USProjectileMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// BeginPlay on the component will be called after the tick has been registered via the owning Actor
	USTickablesSubsystem* Tickables = GetWorld()->GetSubsystem<USTickablesSubsystem>();
	Tickables->RegisterComponent(&PrimaryComponentTick);
}

void USProjectileMovementComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	USTickablesSubsystem* Tickables = GetWorld()->GetSubsystem<USTickablesSubsystem>();
	Tickables->DeRegisterComponent(&PrimaryComponentTick);
}
