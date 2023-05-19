#include "Bird.h"

Bird::Bird(char* a, int b, int c, char* d, std::string e):Animal(a, b, c, d)
{
	city = e;
}

Bird::~Bird()
{
	Animal::~Animal();
}

int Bird::eat() const
{
	if (food == "meat")
	{
		return 1;
	}
	else if (food == "plants")
	{
		return 2;
	}
	else if (food == "both")
	{
		return 3;
	}
}

char* Bird::getFood() const
{
	return food;
}

