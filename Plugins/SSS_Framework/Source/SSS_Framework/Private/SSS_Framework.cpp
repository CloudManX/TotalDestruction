// Copyright Epic Games, Inc. All Rights Reserved.

#include "SSS_Framework.h"

#define LOCTEXT_NAMESPACE "FSSS_FrameworkModule"

void FSSS_FrameworkModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FSSS_FrameworkModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSSS_FrameworkModule, SSS_Framework)