#pragma once
#include <string>

// https://habr.com/ru/post/64280/
//  https://habr.com/ru/post/149287/

class IAirVehicle {
public:
	IAirVehicle() = default;
	IAirVehicle(std::string name)
		: _name(name)
	{ }
	virtual ~IAirVehicle() {}

	virtual std::string GetName() = 0;
	virtual double GetSpeed() = 0;
	virtual double GetDistance() = 0;
	virtual double GetCoefDistanceReduce() = 0;

	virtual void SetName(std::string name) = 0;
	virtual void SetSpeed(double speed) = 0;
	virtual void SetDistance(double distance) = 0;
	virtual void SetCoefDistanceReduce(double coef) = 0;
	
	virtual void AddDistance(double distance) = 0;

	virtual void ToRace() = 0;
	virtual void Reset() = 0;
private:
	std::string _name;
	double _speed = 0;
	double _distance = 0;
	double _coefDistanceReduce = 0;
};

class MagicCarpet : public IAirVehicle {
public:
	MagicCarpet() {}
	MagicCarpet(std::string name)
		: _name(name)
	{ }

	virtual std::string GetName() override;
	virtual double GetSpeed() override;
	virtual double GetCoefDistanceReduce() override;
	virtual double GetDistance() override;

	virtual void SetName(std::string name) override;
	virtual void SetSpeed(double speed) override;
	virtual void SetDistance(double distance) override;
	virtual void SetCoefDistanceReduce(double coef) override;

	virtual void AddDistance(double distance) override;

	virtual void ToRace() override;
	virtual void Reset() override;
private:
	std::string _name = "Magic Carpet";
	double _speed = 10.0;
	double _distance = 0;
	double _coefDistanceReduce = 1.0;
};

class Stupa : public IAirVehicle {
public:
	Stupa() = default;
	Stupa(std::string name)
		: _name(name)
	{ }
	
	virtual std::string GetName() override;
	virtual double GetSpeed() override;
	virtual double GetCoefDistanceReduce() override;
	virtual double GetDistance() override;

	virtual void SetName(std::string name) override;
	virtual void SetSpeed(double speed) override;
	virtual void SetCoefDistanceReduce(double coef) override;
	virtual void SetDistance(double distance) override;

	virtual void AddDistance(double distance) override;

	virtual void ToRace() override;
	virtual void Reset() override;

private:
	std::string _name = "Stupa";
	double _speed = 8.0;
	double _distance = 0;
	double _coefDistanceReduce = 1.06;
};

class Broom : public IAirVehicle {
public:
	Broom() = default;
	Broom(std::string name)
		: _name(name)
	{ }

	virtual std::string GetName() override;
	virtual double GetSpeed() override;
	virtual double GetCoefDistanceReduce() override;
	virtual double GetDistance() override;

	virtual void SetName(std::string name) override;
	virtual void SetSpeed(double speed) override;
	virtual void SetCoefDistanceReduce(double coef) override;
	virtual void SetDistance(double distance) override;
	void SetSignificantDistance(double distance);

	virtual void AddDistance(double distance) override;
	void AddCoefDistanceReduce(double coef);

	virtual void ToRace() override;
	virtual void Reset() override;
private:
	std::string _name = "Broom";
	double _speed = 20.0;
	double _distance = 0;
	double _coefDistanceReduce = 1.0;
	double _significantDistance = 1000;
};