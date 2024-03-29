// Copyright (c) Developed by Josh (db) Debelec - Published by n00dbeaver Studios 2022 - All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimSequence.h"

#include "FN00dEmotesData.generated.h"


USTRUCT(BlueprintType)
struct FN00dEmotesData : public FTableRowBase
{
	GENERATED_BODY()

	// The display name of this emote if required
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = default)
		FText DisplayName;
	// The slot on the owner mesh that we want this emote to layer into
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = default)
		FName Slot;
	// The tag that this emote is for
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = default)
		FGameplayTag Tag;
	// Should this emote disable movement for its duration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = default)
		bool DisableMovement;
	// The animation we want to play when the emote is called
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = default)
		TSoftObjectPtr<UAnimSequence> Animation;
	// Alternative method of emoting, leave blank to use slot based animation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = default)
		TSoftObjectPtr<UAnimMontage> Montage;
	// Should this animation loop until interrupted by the player. 
	// You MUST NOT have DisableMovement enabled with this option. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = default)
		bool Looping;
	
	// Default Constructor
	FN00dEmotesData()
	{
		// Construct any values here
		DisableMovement = false;
		Looping = false;
	}
};

UCLASS()
class N00DEMOTES_API UFN00dEmotesData : public UUserDefinedStruct
{
	GENERATED_BODY()
	
};
