#include <iostream>
#include "AirVehicles.h"
#include "LandVehicles.h"
#include "RaceManager.h"


int main() {
	MagicCarpet* carpet = new MagicCarpet;
	Stupa* stupa = new Stupa;
	Broom* broom = new Broom;

	std::cout << carpet->GetName() << "\t" << carpet->GetSpeed() << std::endl;
	std::cout << stupa->GetName() << "\t" << stupa->GetSpeed() << std::endl;
	std::cout << broom->GetName() << "\t" << broom->GetSpeed() << std::endl;

	AirRaceManager* airRace = new AirRaceManager;
	airRace->AddVehicle(carpet);
	airRace->AddVehicle(stupa);
	airRace->AddVehicle(broom);

	airRace->MakeRace(12000);





	Bactrian* bactrian = new Bactrian;
	FastCamel* fastcamel = new FastCamel;
	Centaur* centaurus = new Centaur;
	MagicBoots* boots = new MagicBoots;

	std::cout << bactrian->GetName() << "\t" << bactrian->GetSpeed() << std::endl;
	std::cout << fastcamel->GetName() << "\t" << fastcamel->GetSpeed() << std::endl;
	std::cout << centaurus->GetName() << "\t" << centaurus->GetSpeed() << std::endl;
	std::cout << boots->GetName() << "\t" << boots->GetSpeed() << std::endl;

	LandRaceManager* landRace = new LandRaceManager;

	landRace->AddVehicle(bactrian);
	landRace->AddVehicle(fastcamel);
	landRace->AddVehicle(centaurus);
	landRace->AddVehicle(boots);

	landRace->MakeRace(10000);

	delete carpet;
	delete stupa;
	delete broom;
	
	delete bactrian;
	delete fastcamel;
	delete centaurus;
	delete boots;
}