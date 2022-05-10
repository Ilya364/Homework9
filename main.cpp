#include "Property.h"
#include <iostream>


int main()
{
	const int SIZE = 7;

	auto flat1 = new Apartment(12000000);
	auto flat2 = new Apartment(10000000);
	auto flat3 = new Apartment(10000000);
	auto car1 = new Car(1000000);
	auto car2 = new Car(2000000);
	auto countryHouse1 = new CountryHouse(22000000);
	auto countryHouse2 = new CountryHouse(24000000);

	auto arr = new Property * [SIZE] {flat1, flat2, flat3, car1, car2, countryHouse1, countryHouse2};


	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i]->TaxCalculation() << std::endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		delete arr[i];
	}

	delete[] arr;
}

