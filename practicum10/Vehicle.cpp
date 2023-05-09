#include "Vehicle.h"

void Vehicle::set(int a, int b, int c, int d)
{
	id = a;
	seats = b;
	maxSpeed = c;
	rent = d;
}

Vehicle::Vehicle()
{
	set(0, 0, 0, 0);
}

Vehicle::Vehicle(int a, int b, int c, int d)
{
	set(a, b, c, d);
}

Vehicle::Vehicle(Vehicle& other)
{
	set(other.id, other.seats, other.maxSpeed, other.rent);
}

Vehicle& Vehicle::operator=(Vehicle& other)
{
	if (this!=&other)
	{
		set(other.id, other.seats, other.maxSpeed, other.rent);
	}
	return*this;
}
