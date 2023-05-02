#include "Animal.h"

void Animal::copy(Animal& other)
{
	name = new char[strlen(other.name) + 1];
	for (size_t i = 0; i < strlen(other.name); i++)
	{
		name[i] = other.name[i];
	}
	age = other.age;
}

void Animal::destroy()
{
	delete[] name;
}

Animal::Animal()
{
	age = 0;
	strcpy(name, "");
}

Animal::Animal(char* n, unsigned a)
{
	name = new char[strlen(n) + 1];
	for (size_t i = 0; i < strlen(n); i++)
	{
		name[i] = n[i];
	}
	age = a;
}

Animal::~Animal()
{
	destroy();
}

Animal::Animal(Animal& other)
{
	copy(other);
}

Animal& Animal::operator=(Animal& other)
{
	if (this!=&other)
	{
		destroy();
		copy(other);
	}

	return *this;
}

void Animal::rename(char* newName)
{
	name = new char[strlen(newName) + 1];
	for (size_t i = 0; i < strlen(newName); i++)
	{
		name[i] = newName[i];
	}
}
