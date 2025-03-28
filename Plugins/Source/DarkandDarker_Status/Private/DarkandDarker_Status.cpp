// Copyright Epic Games, Inc. All Rights Reserved.

#include "DarkandDarker_Status.h"

#define LOCTEXT_NAMESPACE "FDarkandDarker_StatusModule"

void FDarkandDarker_StatusModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FDarkandDarker_StatusModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDarkandDarker_StatusModule, DarkandDarker_Status)