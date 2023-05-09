#include "SportsCar.h"

void SportsCar::copy(char* other)
{
	model = new char[strlen(other) + 1];
	for (size_t i = 0; i < strlen(other); i++)
	{
		model[i] = other[i];
	}
}

void SportsCar::destroy()
{
	delete[] model;
}

SportsCar::SportsCar(int a, int b, int c, int d, char* name):Vehicle(a, b, c, d)
{
	copy(name);
}

SportsCar::SportsCar(SportsCar& other):Vehicle(other)
{
	copy(other.model);
}

SportsCar& SportsCar::operator=(SportsCar& other)
{
	if (this!=&other)
	{
		destroy();
		Vehicle::operator=(other);
		copy(other.model);
	}
	return *this;
}

SportsCar::~SportsCar()
{
	destroy();
}
