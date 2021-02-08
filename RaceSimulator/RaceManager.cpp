#include "RaceManager.h"

void AirRaceManager::MakeRace(double distance) {
	std::vector<std::pair<std::string, double>> nameAndTimeList;
	for (auto& vehicle : airVehicles) {
		double time = 0;
		while (!(vehicle->GetDistance() >= distance)) {
			time += 0.1;
			vehicle->ToRace();
		}
		nameAndTimeList.push_back({ vehicle->GetName(), time });
	}

	std::string winner;
	double winnerTime = DBL_MAX;
	for (auto& pair : nameAndTimeList) {
		if (pair.second < winnerTime) {
			winner = pair.first;
			winnerTime = pair.second;
		}
	}

	for (auto& vehicle : airVehicles) {
		vehicle->Reset();
	}

	std::cout << "=== Results ===" << "\n";
	std::cout << "\n";
	for (auto& pair : nameAndTimeList) {
		std::cout << "Name: " << pair.first << "\tTime: " << pair.second << "\n";
	}
	std::cout << "\n";
	std::cout << "The winner is: " << winner << "\tTime: " << winnerTime << "\n";
}

void AirRaceManager::AddVehicle(IAirVehicle* vehicle) {
	airVehicles.push_back(vehicle);
}


void LandRaceManager::MakeRace(double distance) {
	std::vector < std::pair<std::string, double>> nameAndTimeList;
	for (auto& vehicle : landVehicles) {
		double time = 0;
		while (!(vehicle->GetDistance() >= distance)) {
			time += 0.1;
			vehicle->ToRace();
		}
		nameAndTimeList.push_back({ vehicle->GetName(), time });
	}

	std::string winner;
	double winnerTime = DBL_MAX;
	for (auto& pair : nameAndTimeList) {
		if (pair.second < winnerTime) {
			winner = pair.first;
			winnerTime = pair.second;
		}
	}

	for (auto& vehicle : landVehicles) {
		vehicle->Reset();
	}

	std::cout << "=== Results ===" << "\n";
	std::cout << "\n";
	for (auto& pair : nameAndTimeList) {
		std::cout << "Name: " << pair.first << "\tTime: " << pair.second << "\n";
	}
	std::cout << "\n";
	std::cout << "The winner is: " << winner << "\tTime: " << winnerTime << "\n";
}

void LandRaceManager::AddVehicle(ILandVehicle* vehicle) {
	landVehicles.push_back(vehicle);
}