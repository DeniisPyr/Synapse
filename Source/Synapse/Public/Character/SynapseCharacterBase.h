// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SynapseCharacterBase.generated.h"

UCLASS(Abstract)
class SYNAPSE_API ASynapseCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	ASynapseCharacterBase();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
};
