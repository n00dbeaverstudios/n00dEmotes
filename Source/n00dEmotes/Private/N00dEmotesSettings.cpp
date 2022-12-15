// Copyright (c) Developed by Josh (db) Debelec - Published by n00dbeaver Studios 2022 - All Rights Reserved. 


#include "N00dEmotesSettings.h"

UN00dEmotesSettings::UN00dEmotesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// reference the master sound cue
	DefaultMappingContext = LoadObject<UInputMappingContext>(NULL, TEXT("/n00dEmotes/Examples/MC_N00dEmotes.MC_N00dEmotes"), NULL, LOAD_None, NULL);

	
}