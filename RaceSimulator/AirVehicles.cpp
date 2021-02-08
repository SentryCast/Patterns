#include "AirVehicles.h"

std::string MagicCarpet::GetName() {
	return _name;
}

double MagicCarpet::GetSpeed() {
	return _speed;
}

double MagicCarpet::GetCoefDistanceReduce() {
	return _coefDistanceReduce;
}

double MagicCarpet::GetDistance() {
	return _distance;
}

void MagicCarpet::SetName(std::string name) {
	_name = name;
}

void MagicCarpet::SetCoefDistanceReduce(double coef) {
	_coefDistanceReduce = coef;
}

void MagicCarpet::SetDistance(double distance) {
	_distance = distance;
}

void MagicCarpet::AddDistance(double distance) {
	_distance += distance;
}

void MagicCarpet::SetSpeed(double speed) {
	_speed = speed;
}

void MagicCarpet::ToRace() {
	if (_distance < 1000) {
		SetCoefDistanceReduce(1.0);
	}
	else if (_distance < 5000) {
		SetCoefDistanceReduce(1.03);
	}
	else if (_distance < 10000) {
		SetCoefDistanceReduce(1.1);
	}
	else {
		SetCoefDistanceReduce(1.05);
	}

	AddDistance(_speed * _coefDistanceReduce);
}

void MagicCarpet::Reset() {
	SetDistance(0);
	SetSpeed(10.0);
	SetCoefDistanceReduce(1.0);
}


std::string Stupa::GetName() {
	return _name;
}

double Stupa::GetSpeed() {
	return _speed;
}

double Stupa::GetCoefDistanceReduce() {
	return _coefDistanceReduce;
}

double Stupa::GetDistance() {
	return _distance;
}

void Stupa::SetName(std::string name) {
	_name = name;
}
void Stupa::SetSpeed(double speed) {
	_speed = speed;
}

void Stupa::SetCoefDistanceReduce(double coef) {
	_coefDistanceReduce = coef;
}

void Stupa::SetDistance(double distance) {
	_distance = distance;
}

void Stupa::AddDistance(double distance) {
	_distance += distance;
}

void Stupa::ToRace() {
	AddDistance(_speed * _coefDistanceReduce);
}

void Stupa::Reset() {
	SetDistance(0);
	SetSpeed(8.0);
	SetCoefDistanceReduce(1.06);
}

std::string Broom::GetName() {
	return _name;
}

double Broom::GetSpeed() {
	return _speed;
}

double Broom::GetCoefDistanceReduce() {
	return _coefDistanceReduce;
}

double Broom::GetDistance() {
	return _distance;
}

void Broom::SetName(std::string name) {
	_name = name;
}

void Broom::SetSpeed(double speed) {
	_speed = speed;
}

void Broom::SetCoefDistanceReduce(double coef) {
	_coefDistanceReduce = coef;
}

void Broom::SetDistance(double distance) {
	_distance = distance;
}

void Broom::SetSignificantDistance(double distance) {
	_significantDistance = distance;
}

void Broom::AddDistance(double distance) {
	_distance += distance;
}

void Broom::AddCoefDistanceReduce(double coef) {
	_coefDistanceReduce += coef;
}

void Broom::ToRace() {
	_significantDistance = 1000;
	if (_distance >= _significantDistance) {
		AddCoefDistanceReduce(0.1);
		_significantDistance += 1000;
	}

	AddDistance(_speed * _coefDistanceReduce);
}

void Broom::Reset() {
	SetSpeed(20.0);
	SetDistance(0);
	SetCoefDistanceReduce(1.0);
	SetSignificantDistance(1000);
}