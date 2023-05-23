#include "Car.h"

void Car::copy(char* man, char* mod)
{
	manufacturer = new char[strlen(man) + 1];
	model = new char[strlen(mod) + 1];

	for (size_t i = 0; i < strlen(man) + 1; i++)
	{
		manufacturer[i] = man[i];
	}
	for (size_t i = 0; i < strlen(mod) + 1; i++)
	{
		model[i] = mod[i];
	}

	sizeMan = strlen(man);
	sizeMod = strlen(mod) ;
}

void Car::destroy()
{
	delete[] manufacturer;
	delete[] model;
}

Car::Car(int power, int weight, std::string owner, bool tangible, char* man, char* mod)
	:Vehicle(power, weight), Property(owner, tangible)
{
	copy(man, mod);
}

Car::~Car()
{
	destroy();
}

Car::Car(Car& other):Vehicle(other), Property(other)
{
	copy(other.manufacturer, other.model);
}

Car& Car::operator=(Car& other)
{
	if (this!=&other)
	{
		destroy();
		Vehicle::operator=(other);
		Property::operator=(other);
		copy(other.manufacturer, other.model);
	}
	return *this;
}

void Car::startEngine() const
{
	while (power>=0)
	{
		

	}
}
