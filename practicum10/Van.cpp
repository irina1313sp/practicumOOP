#include "Van.h"

Van::Van(int a, int b, int c, int d, int e):Vehicle(a,b,c,d)
{
	trunkCapacity = e;
}

Van::Van(Van& other):Vehicle(other)
{
	trunkCapacity = other.trunkCapacity;
}

Van& Van::operator=(Van& other)
{
	if (this!=&other)
	{
		Vehicle::operator=(other);
		trunkCapacity = other.trunkCapacity;
	}
	return *this;
}
