#pragma once
class Property
{
	double worth;
public:
	Property():worth(0){}

	Property(double worth):worth(worth){}

	double GetWorth()
	{
		return this->worth;
	}

	virtual double TaxCalculation() = 0;
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
};

