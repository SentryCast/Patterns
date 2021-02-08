#include "LandVehicles.h"

std::string Bactrian::GetName() {
	return _name;
}

double Bactrian::GetSpeed() {
	return _speed;
}

double Bactrian::GetDistance() {
	return _distance;
}

double Bactrian::GetRestDuration() {
	return _restDuration;
}

double Bactrian::GetRestInterval() {
	return _restInterval;
}

int Bactrian::GetRestsAmount() {
	return _restsAmount;
}

int Bactrian::GetPeriod() {
	return _period;
}

void Bactrian::SetName(std::string name) {
	_name = name;
}

void Bactrian::SetSpeed(double speed) {
	_speed = speed;
}

void Bactrian::SetDistance(double distance) {
	_distance = distance;
}

void Bactrian::SetRestDuration(double restDuration) {
	_restDuration = restDuration;
}

void Bactrian::SetRestInterval(double restInterval) {
	_restInterval = restInterval;
}

void Bactrian::SetRestsAmount(int restsAmount) {
	_restsAmount = restsAmount;
}

void Bactrian::SetPeriod(int period) {
	_period = period;
}

void Bactrian::AddSpeed(double speed) {
	_speed += speed;
}

void Bactrian::AddDistance(double distance) {
	_distance += distance;
}

void Bactrian::AddRestDuration(double restDuration) {
	_restDuration += restDuration;
}

void Bactrian::AddRestInterval(double restInterval) {
	_restInterval += restInterval;
}

void Bactrian::AddRestsAmount(int restsAmount) {
	_restsAmount += restsAmount;
}

void Bactrian::AddPeriod(int period) {
	_period += period;
}

void Bactrian::ToRace() {
	AddPeriod(1);
	if (_period == _restInterval && _restsAmount != _restDuration) {
		AddRestsAmount(1);
		AddPeriod(-1);
		SetRestDuration(8);
	}
	else if (_period == _restInterval) {
		SetRestsAmount(0);
		SetPeriod(0);
	}
	else {
		AddDistance(_speed);
	}
}

void Bactrian::Reset() {
	SetSpeed(10);
	SetDistance(0);
	SetRestDuration(5);
	SetRestInterval(30);
	SetRestsAmount(0);
	SetPeriod(0);
}


std::string FastCamel::GetName() {
	return _name;
}

double FastCamel::GetSpeed() {
	return _speed;
}

double FastCamel::GetDistance() {
	return _distance;
}

double FastCamel::GetRestDuration() {
	return _restDuration;
}

double FastCamel::GetRestInterval() {
	return _restInterval;
}

int FastCamel::GetRestsAmount() {
	return _restsAmount;
}

int FastCamel::GetPeriod() {
	return _period;
}

void FastCamel::SetName(std::string name) {
	_name = name;
}

void FastCamel::SetSpeed(double speed) {
	_speed = speed;
}

void FastCamel::SetDistance(double distance) {
	_distance = distance;
}

void FastCamel::SetRestDuration(double restDuration) {
	_restDuration = restDuration;
}

void FastCamel::SetRestInterval(double restInterval) {
	_restInterval = restInterval;
}

void FastCamel::SetRestsAmount(int restsAmount) {
	_restsAmount = restsAmount;
}

void FastCamel::SetPeriod(int period) {
	_period = period;
}

void FastCamel::AddSpeed(double speed) {
	_speed += speed;
}

void FastCamel::AddDistance(double distance) {
	_distance += distance;
}

void FastCamel::AddRestDuration(double restDuration) {
	_restDuration += restDuration;
}

void FastCamel::AddRestInterval(double restInterval) {
	_restInterval += restInterval;
}

void FastCamel::AddRestsAmount(int restsAmount) {
	_restsAmount += restsAmount;
}

void FastCamel::AddPeriod(int period) {
	_period += period;
}

void FastCamel::ToRace() {
	AddPeriod(1);
	if (_period == _restInterval && _restsAmount < _restDuration && !_isRestedSecondTime) {
		AddRestsAmount(1);
		AddPeriod(-1);
		SetRestDuration(6.5);
		_isRestedSecondTime = true;
	}
	else if (_period == _restInterval && _restsAmount < _restDuration && _isRestedSecondTime) {
		AddRestsAmount(1);
		AddPeriod(-1);
		SetRestDuration(8);
	}
	else if (_period == _restInterval) {
		SetRestsAmount(0);
		SetPeriod(0);
	}
	else {
		AddDistance(_speed);
	}
}

void FastCamel::Reset() {
	SetSpeed(40);
	SetDistance(0);
	SetRestDuration(5);
	SetRestInterval(10);
	SetRestsAmount(0);
	SetPeriod(0);
	_isRestedSecondTime = false;
}


std::string Centaur::GetName() {
	return _name;
}

double Centaur::GetSpeed() {
	return _speed;
}

double Centaur::GetDistance() {
	return _distance;
}

double Centaur::GetRestDuration() {
	return _restDuration;
}

double Centaur::GetRestInterval() {
	return _restInterval;
}

int Centaur::GetRestsAmount() {
	return _restsAmount;
}

int Centaur::GetPeriod() {
	return _period;
}

void Centaur::SetName(std::string name) {
	_name = name;
}

void Centaur::SetSpeed(double speed) {
	_speed = speed;
}

void Centaur::SetDistance(double distance) {
	_distance = distance;
}

void Centaur::SetRestDuration(double restDuration) {
	_restDuration = restDuration;
}

void Centaur::SetRestInterval(double restInterval) {
	_restInterval = restInterval;
}

void Centaur::SetRestsAmount(int restsAmount) {
	_restsAmount = restsAmount;
}

void Centaur::SetPeriod(int period) {
	_period = period;
}

void Centaur::AddSpeed(double speed) {
	_speed += speed;
}

void Centaur::AddDistance(double distance) {
	_distance += distance;
}

void Centaur::AddRestDuration(double restDuration) {
	_restDuration += restDuration;
}

void Centaur::AddRestInterval(double restInteval) {
	_restInterval += restInteval;
}

void Centaur::AddRestsAmount(int restsAmount) {
	_restsAmount += restsAmount;
}

void Centaur::AddPeriod(int period) {
	_period = period;
}

void Centaur::ToRace() {
	AddPeriod(1);
	if (_period == _restInterval && _restsAmount != _restDuration) {
		AddRestsAmount(1);
		AddPeriod(-1);
	}
	else if (_period == _restInterval) {
		SetRestsAmount(0);
		SetPeriod(0);
	}
	else {
		AddDistance(_speed);
	}
}

void Centaur::Reset() {
	SetSpeed(15);
	SetDistance(0);
	SetRestDuration(2);
	SetRestInterval(8);
	SetRestsAmount(0);
	SetPeriod(0);
}


std::string MagicBoots::GetName() {
	return _name;
}

double MagicBoots::GetSpeed() {
	return _speed;
}

double MagicBoots::GetDistance() {
	return _distance;
}

double MagicBoots::GetRestDuration() {
	return _restDuration;
}

double MagicBoots::GetRestInterval() {
	return _restInterval;
}

int MagicBoots::GetRestsAmount() {
	return _restsAmount;
}

int MagicBoots::GetPeriod() {
	return _period;
}

void MagicBoots::SetName(std::string name) {
	_name = name;
}

void MagicBoots::SetSpeed(double speed) {
	_speed = speed;
}

void MagicBoots::SetDistance(double distance) {
	_distance = distance;
}

void MagicBoots::SetRestDuration(double restDuration) {
	_restDuration = restDuration;
}

void MagicBoots::SetRestInterval(double restInterval) {
	_restInterval = restInterval;
}

void MagicBoots::SetRestsAmount(int restsAmount) {
	_restsAmount = restsAmount;
}

void MagicBoots::SetPeriod(int period) {
	_period = period;
}

void MagicBoots::AddSpeed(double speed) {
	_speed += speed;
}

void MagicBoots::AddDistance(double distance) {
	_distance += distance;
}

void MagicBoots::AddRestDuration(double restDuration) {
	_restDuration += restDuration;
}

void MagicBoots::AddRestInterval(double restInterval) {
	_restInterval = restInterval;
}

void MagicBoots::AddRestsAmount(int restsAmount) {
	_restsAmount = restsAmount;
}

void MagicBoots::AddPeriod(int period) {
	_period = period;
}

void MagicBoots::ToRace() {
	AddPeriod(1);
	if (_period == _restInterval && _restsAmount != _restDuration) {
		AddRestsAmount(1);
		AddPeriod(-1);
		SetRestDuration(5);
	}
	else if (_period == _restInterval) {
		SetRestsAmount(0);
		SetPeriod(0);
	}
	else {
		AddDistance(_speed);
	}
}

void MagicBoots::Reset() {
	SetSpeed(6);
	SetDistance(0);
	SetRestDuration(10);
	SetRestInterval(60);
	SetRestsAmount(0);
	SetPeriod(0);
}