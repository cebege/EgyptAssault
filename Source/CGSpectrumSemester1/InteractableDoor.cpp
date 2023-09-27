// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"
#include "DoorInteractionComponent.h"

AInteractableDoor::AInteractableDoor()
{
	DoorInteractionComp = CreateDefaultSubobject<UDoorInteractionComponent>(TEXT("Door Interaction Component"));
}