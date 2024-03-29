// Copyright (c) Developed by Josh (db) Debelec - Published by n00dbeaver Studios 2022 - All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "InputMappingContext.h"

#include "N00dEmotesSettings.generated.h"

/**
 * Settings object used to hold both config settings and editable ones in one place
 * To ensure the settings are saved to the specified config file make sure to add
 * props using the globalconfig or config meta.
 */

UCLASS(config = Game, defaultconfig) // specify the name of the config file to use
class N00DEMOTES_API UN00dEmotesSettings : public UObject
{

	GENERATED_BODY()

public:

		UN00dEmotesSettings(const FObjectInitializer& ObjectInitializer);

	/////////////////////////////////////////////// PROPERTIES \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


	///////////////////////////////
	//	DEBUG
	///////////////////////////////

	// Enabling this will print and activate any various debugging info relevant to n00dFootsteps
	UPROPERTY(EditAnywhere, BlueprintReadOnly, config, Category = Debug)
		bool DebugEmotes;
	// Don't use this component for any reason in particular 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, config, Category = Debug)
		bool DisableEmotes;

	///////////////////////////////
	//	DATA
	///////////////////////////////

	// The Data Table that specifies what Emotes that exist
	UPROPERTY(EditAnywhere, BlueprintReadOnly, config, Category = Data, meta = (RequiredAssetDataTags = "RowStructure=FN00dEmotesData"))
		TSoftObjectPtr<class UDataTable> EmoteTable;
	// Use default mapping context, disable this to call the emotes however you like - this is mainly to be plug and play
	UPROPERTY(EditAnywhere, BlueprintReadOnly, config, Category = Data)
		bool UseDefaultMappingContext;
	// The default input mapping contexts we care about
	UPROPERTY(EditAnywhere, BlueprintReadWrite, config, Category = Data)
		TSoftObjectPtr<class UInputMappingContext> DefaultMappingContext;






};
