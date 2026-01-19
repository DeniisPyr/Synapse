// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SynapseCharacterBase.h"

ASynapseCharacterBase::ASynapseCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(),FName("WeaponHandSocket")); 
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision); 

}

void ASynapseCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

