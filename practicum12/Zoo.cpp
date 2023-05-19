#include "Zoo.h"

Zoo::Zoo(std::string a, int b, int c)
{
	name = a;
	size = 0;
	animals = new Animal * [size];
	kgOfPlants = b;
	kgOfMeat = c;
}

Zoo::~Zoo()
{
	for (size_t i = 0; i < size; i++)
	{
		delete[]animals[i];
	}
	delete[] animals;
}

void Zoo::addAnimal(Animal* other)
{
	animals = new Animal * [size + 1];
	animals[size] = other;
	size++;
}

int Zoo::getCreatedAnimals()
{
	return animals[size]->getCount();
}

void Zoo::feedAnimals()
{
	for (size_t i = 0; i < size; i++)
	{
		if (animals[i]->getFood()=="plants")
		{
			kgOfPlants -= animals[i]->eat();
		}
		else if (animals[i]->getFood() == "meat")
		{
			kgOfMeat -= animals[i]->eat();
		}
		else
		{
			kgOfPlants -= animals[i]->eat();
			kgOfMeat -= animals[i]->eat();
		}
	}
}
