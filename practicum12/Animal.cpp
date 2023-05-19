#include "Animal.h"
#include <cstring>
Animal::Animal(char* a, int b, int c, char* d)
{
	name = new char[strlen(a) + 1];
	food = new char[strlen(d) + 1];
	for (size_t i = 0; i < strlen(a) + 1; i++)
	{
		name[i] = a[i];
	}
	for (size_t i = 0; i < strlen(d) + 1; i++)
	{
		food[i] = d[i];
	}
	weight = b;
	years = c;
	count++;
}

Animal::~Animal()
{
	delete[] name;
	delete[] food;
}

char* Animal::getName()
{
	return name;
}

int Animal::getCount()
{
	return Animal::count;
}
