// Copyright Blue Man

#pragma once

#include "ModuleManager.h"

class FBlueManVehiclePhysicsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};