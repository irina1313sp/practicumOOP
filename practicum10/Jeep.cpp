#include "Jeep.h"

Jeep::Jeep(int a, int b, int c, int d,bool e):Vehicle(a, b, c, d)
{
	is4x4 = e;
}

Jeep::Jeep(Jeep& other):Vehicle(other)
{
	is4x4 = other.is4x4;
}

Jeep& Jeep::operator=(Jeep& other)
{
	if (this!=&other)
	{
		Vehicle::operator=(other);
		is4x4 = other.is4x4;

	}
	return *this;
}
