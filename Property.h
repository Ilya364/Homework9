#pragma once
class Property
{
public:
	Property();

	Property(double worth)
	{
		this->worth = worth;
	}

	double GetWorth()
	{
		return this->worth;
	}

	~Property() {};

	virtual double TaxCalculation() = 0;
private:
	double worth;
};

class Apartment:public Property
{
public:
	double TaxCalculation() override
	{
		return (this->GetWorth()) / 1000;
	}

	Apartment(double worth) :
		Property(worth){}

	~Apartment();
};

class Car :public Property
{
public:
	double TaxCalculation() override
	{
		return (this->GetWorth()) / 200;
	}

	Car(double worth) :
		Property(worth){}

	~Car();
};

class CountryHouse :public Property
{
public:
	double TaxCalculation() override
	{
		return (this->GetWorth()) / 500;
	}

	CountryHouse(double worth) :
		Property(worth) {}

	~CountryHouse() {};
};

