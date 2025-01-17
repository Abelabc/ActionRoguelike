﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/STickablesSubsystem.h"


void FTickablesTickFunction::ExecuteTick(float DeltaTime, ELevelTick TickType, ENamedThreads::Type CurrentThread,
	const FGraphEventRef& MyCompletionGraphEvent)
{
	Target->ExecuteTick(TickGroup, DeltaTime, TickType, CurrentThread, MyCompletionGraphEvent);
}


void USTickablesSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Register for once to tick all components
	// @todo: expand to have one option per tick group

	ComponentsTick.bCanEverTick = true;
	ComponentsTick.Target = this;
	ComponentsTick.TickGroup = TG_PrePhysics;

	// interesting to try async logic
	ComponentsTick.bRunOnAnyThread = false;
	
	ComponentsTick.RegisterTickFunction(GetWorld()->PersistentLevel);
}


void USTickablesSubsystem::RegisterComponent(FActorComponentTickFunction* TickFunction)
{
	// Remove from the standard system
	TickFunction->UnRegisterTickFunction();

	check(!TickableComponents.Contains(TickFunction));
	TickableComponents.Add(TickFunction);
}

void USTickablesSubsystem::DeRegisterComponent(FActorComponentTickFunction* TickFunction)
{
	// Cleanup
	CleanupQueue.Add(TickFunction);
}


void USTickablesSubsystem::ExecuteTick(ETickingGroup TickGroup, float DeltaTime, ELevelTick TickType, ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent)
{
	{
		SCOPED_NAMED_EVENT(TickManagedComponents, FColor::Orange);
	
		// @todo: want one of these loops for every class to keep them sorted
		for (FActorComponentTickFunction* Func : TickableComponents)
		{
			Func->ExecuteTick(DeltaTime, TickType, CurrentThread, MyCompletionGraphEvent);
		}
	}

	// Cleanup after ticking all components
	for (FActorComponentTickFunction* Func : CleanupQueue)
	{
		TickableComponents.Remove(Func);
	}
	CleanupQueue.Empty();
}
