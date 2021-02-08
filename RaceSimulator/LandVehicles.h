#pragma once
#include <string>

class ILandVehicle {
public:
	ILandVehicle() = default;
	ILandVehicle(std::string name)
		: _name(name)
	{ }

	virtual ~ILandVehicle() = default;

	virtual std::string GetName() = 0;
	virtual double GetSpeed() = 0;
	virtual double GetDistance() = 0;
	virtual double GetRestDuration() = 0;
	virtual double GetRestInterval() = 0;
	virtual int GetRestsAmount() = 0;
	virtual int GetPeriod() = 0;

	virtual void SetName(std::string name) = 0;
	virtual void SetSpeed(double speed) = 0;
	virtual void SetDistance(double distance) = 0;
	virtual void SetRestDuration(double restDuration) = 0;
	virtual void SetRestInterval(double restInterval) = 0;
	virtual void SetRestsAmount(int restsAmount) = 0;
	virtual void SetPeriod(int period) = 0;
	
	virtual void AddSpeed(double speed) = 0;
	virtual void AddDistance(double distance) = 0;
	virtual void AddRestDuration(double restDuration) = 0;
	virtual void AddRestInterval(double restInterval) = 0;
	virtual void AddRestsAmount(int restsAmount) = 0;
	virtual void AddPeriod(int period) = 0;

	virtual void ToRace() = 0;
	virtual void Reset() = 0;
private:
	std::string _name;
	double _speed = 0;
	double _distance = 0;
	double _restDuration = 0;
	double _restInterval = 0;
	int _restsAmount = 0;
	int _period = 0;
};


class Bactrian : public ILandVehicle {
public:
	Bactrian() = default;
	Bactrian(std::string name)
		: _name(name)
	{ }
	~Bactrian() = default;

	virtual std::string GetName() override;
	virtual double GetSpeed() override;
	virtual double GetDistance() override;
	virtual double GetRestDuration() override;
	virtual double GetRestInterval() override;
	virtual int GetRestsAmount() override;
	virtual int GetPeriod() override;
	
	virtual void SetName(std::string name) override;
	virtual void SetSpeed(double speed) override;
	virtual void SetDistance(double distance) override;
	virtual void SetRestDuration(double restDuration) override;
	virtual void SetRestInterval(double restInterval) override;
	virtual void SetRestsAmount(int restsAmount) override;
	virtual void SetPeriod(int period) override;

	virtual void AddSpeed(double speed) override;
	virtual void AddDistance(double distance) override;
	virtual void AddRestDuration(double restDuration) override;
	virtual void AddRestInterval(double restInterval) override;
	virtual void AddRestsAmount(int restsAmount) override;
	virtual void AddPeriod(int period) override;

	virtual void ToRace() override;
	virtual void Reset() override;
private:
	std::string _name = "Bactrian";
	double _speed = 10;
	double _distance = 0;
	double _restDuration = 5;
	double _restInterval = 30;
	int _restsAmount = 0;
	int _period = 0;
};


class FastCamel : public ILandVehicle {
public:
	FastCamel() = default;
	FastCamel(std::string name)
		: _name(name)
	{ }
	~FastCamel() = default;

	virtual std::string GetName() override;
	virtual double GetSpeed() override;
	virtual double GetDistance() override;
	virtual double GetRestDuration() override;
	virtual double GetRestInterval() override;
	virtual int GetRestsAmount() override;
	virtual int GetPeriod() override;

	virtual void SetName(std::string name) override;
	virtual void SetSpeed(double speed) override;
	virtual void SetDistance(double distance) override;
	virtual void SetRestDuration(double restDuration) override;
	virtual void SetRestInterval(double restInterval) override;
	virtual void SetRestsAmount(int restsAmount) override;
	virtual void SetPeriod(int period) override;

	virtual void AddSpeed(double speed) override;
	virtual void AddDistance(double distance) override;
	virtual void AddRestDuration(double restDuration) override;
	virtual void AddRestInterval(double restInterval) override;
	virtual void AddRestsAmount(int restsAmount) override;
	virtual void AddPeriod(int period) override;

	virtual void ToRace() override;
	virtual void Reset() override;
private:
	std::string _name = "Fast Camel";
	double _speed = 40;
	double _distance = 0;
	double _restDuration = 5;
	double _restInterval = 10;
	int _restsAmount = 0;
	int _period = 0;
	bool _isRestedSecondTime = false; // FastCamel's ToRace() updates after the second rest
};

class Centaur : public ILandVehicle {
public:
	Centaur() = default;
	Centaur(std::string name)
		: _name(name)
	{ }
	~Centaur() = default;

	virtual std::string GetName() override;
	virtual double GetSpeed() override;
	virtual double GetDistance() override;
	virtual double GetRestDuration() override;
	virtual double GetRestInterval() override;
	virtual int GetRestsAmount() override;
	virtual int GetPeriod() override;

	virtual void SetName(std::string name) override;
	virtual void SetSpeed(double speed) override;
	virtual void SetDistance(double distance) override;
	virtual void SetRestDuration(double restDuration) override;
	virtual void SetRestInterval(double restInterval) override;
	virtual void SetRestsAmount(int restsAmount) override;
	virtual void SetPeriod(int period) override;

	virtual void AddSpeed(double speed) override;
	virtual void AddDistance(double distance) override;
	virtual void AddRestDuration(double restDuration) override;
	virtual void AddRestInterval(double restInterval) override;
	virtual void AddRestsAmount(int restsAmount) override;
	virtual void AddPeriod(int period) override;

	virtual void ToRace() override;
	virtual void Reset() override;
private:
	std::string _name = "Centaurus";
	double _speed = 15;
	double _distance = 0;
	double _restDuration = 2;
	double _restInterval = 8;
	int _restsAmount = 0;
	int _period = 0;
};

class MagicBoots : public ILandVehicle {
public:
	MagicBoots() = default;
	MagicBoots(std::string name)
		: _name(name)
	{ }
	~MagicBoots() = default;

	virtual std::string GetName() override;
	virtual double GetSpeed() override;
	virtual double GetDistance() override;
	virtual double GetRestDuration() override;
	virtual double GetRestInterval() override;
	virtual int GetRestsAmount() override;
	virtual int GetPeriod() override;

	virtual void SetName(std::string name) override;
	virtual void SetSpeed(double speed) override;
	virtual void SetDistance(double distance) override;
	virtual void SetRestDuration(double restDuration) override;
	virtual void SetRestInterval(double restInterval) override;
	virtual void SetRestsAmount(int restsAmount) override;
	virtual void SetPeriod(int period) override;

	virtual void AddSpeed(double speed) override;
	virtual void AddDistance(double distance) override;
	virtual void AddRestDuration(double restDuration) override;
	virtual void AddRestInterval(double restInterval) override;
	virtual void AddRestsAmount(int restsAmount) override;
	virtual void AddPeriod(int period) override;

	virtual void ToRace() override;
	virtual void Reset() override;
private:
	std::string _name = "Magic Boots";
	double _speed = 6;
	double _distance = 0;
	double _restDuration = 10;
	double _restInterval = 60;
	int _restsAmount = 0;
	int _period = 0;
};