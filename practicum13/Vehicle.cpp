#include "Vehicle.h"

Vehicle::Vehicle()
{
	power = weight = 0;

}

Vehicle::Vehicle(int p, int w)
{
	power = p;
	weight = w;
}

Vehicle::~Vehicle()
{
}

Vehicle::Vehicle(Vehicle& other)
{
	power = other.power;
	weight = other.weight;
}

Vehicle& Vehicle::operator=(Vehicle& other)
{
	if (this!=&other)
	{
		power = other.power;
		weight = other.weight;
	}
	return *this;
}

int Vehicle::getPower()
{
	return power;
}

int Vehicle::getWeight()
{
	return weight;
}

void Vehicle::setPower(int n)
{
	power = n;
}
