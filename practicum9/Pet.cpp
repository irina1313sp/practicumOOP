#include "Pet.h"
#include <iostream>


void Pet::copyPet(Pet& other)
{
	owner = new char[strlen(other.owner) + 1];
	for (size_t i = 0; i < strlen(other.owner); i++)
	{
		owner[i] = other.owner[i];
	}
	cellphone = other.cellphone;
}
void Pet::destroyPet()
{
	delete[] owner;
}
Pet::Pet(char* n, unsigned a, char* o, unsigned c)//: Animal(char* o, unsigned c)
{

	owner = new char[strlen(o) + 1];
	for (size_t i = 0; i < strlen(o); i++)
	{
		owner[i] = o[i];
	}
	cellphone = c;
}

Pet::~Pet()
{
	destroyPet();
}


Pet::Pet(Pet& other):Animal(other)
{
	copyPet(other);
}

Pet& Pet::operator=(Pet& other)
{
	if (this!=&other)
	{
		Animal::operator=(other);
		destroyPet();
		copyPet(other);
	}
	return *this;
}

void Pet::print()
{
	std::cout << name << " is " << age << " years old and its owner is " << owner << ", whose phone number is " << cellphone;
}

void Pet::changeOwner(char* newOwner)
{
	owner = new char[strlen(newOwner) + 1];
	for (size_t i = 0; i < strlen(newOwner); i++)
	{
		owner[i] = newOwner[i];
	}
}
