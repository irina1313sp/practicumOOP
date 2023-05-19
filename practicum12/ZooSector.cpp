#include "ZooSector.h"
#include <iostream>
ZooSector::ZooSector(int a, int b, int cap)
{
	x = a;
	y = b;
	capacity = cap;
	animals = new Animal * [capacity];
	size = 0;
}

void ZooSector::addAnimal(Animal* other)
{
	animals = new Animal * [size + 1];
	animals[size];
	size++;
}

void ZooSector::print()
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << animals[i]->getName() <<"\n";
	}
}
