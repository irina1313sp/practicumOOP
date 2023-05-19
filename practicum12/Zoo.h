#ifndef ZOO_H
#define ZOO_H
#include <string>
#include "Animal.h"
class Zoo {
private:
	std::string name;
	Animal** animals;
	int size;


	int kgOfPlants;
	int kgOfMeat;

public:
	Zoo(std::string a, int b, int c);
	~Zoo();
	void addAnimal(Animal* other);
	int getCreatedAnimals();

	void feedAnimals();
};
#endif // !ZOO_H
