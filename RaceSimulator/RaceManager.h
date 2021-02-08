#pragma once
#include <iostream>
#include <vector>
#include <float.h>
#include "AirVehicles.h"
#include "LandVehicles.h"

class IRaceManager {
public:
	IRaceManager() {}
	virtual ~IRaceManager() {}

	virtual void MakeRace(double distance) = 0;
};

class AirRaceManager : public IRaceManager {
public:
	AirRaceManager() {}
	~AirRaceManager() {}

	virtual void MakeRace(double distance) override;
	void AddVehicle(IAirVehicle* vehicle);
	
private:
	std::vector<IAirVehicle*> airVehicles;
};

class LandRaceManager : public IRaceManager {
public:
	LandRaceManager() {}
	~LandRaceManager() {}

	virtual void MakeRace(double distance) override;
	void AddVehicle(ILandVehicle* vehicle);

private:
	std::vector<ILandVehicle*> landVehicles;
};