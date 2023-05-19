#include "Mamal.h"
#include <cstring>
Mamal::Mamal(char* a, int b, int c, char* d, char* e)
	:Animal(a,b,c,d)
{
	owner = new char[strlen(e) + 1];
	for (size_t i = 0; i < strlen(a) + 1; i++)
	{
		owner[i] = e[i];
	}
}

Mamal::~Mamal()
{
	delete[]owner;
}

int Mamal::eat() const
{
	if (food=="meat")
	{
		return 1;
	}
	else if (food=="plants")
	{
		return 2;
	}
	else if (food=="both")
	{
		return 3;
	}
}

char* Mamal::getFood() const
{
	return food;
}
