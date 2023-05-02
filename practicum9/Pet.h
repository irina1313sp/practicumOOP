#ifndef PET_H
#define PET_H
#include "Animal.h"
#include "Animal.cpp"

class Pet : public Animal {

private:
	char* owner;
	unsigned cellphone;

	void copyPet(Pet& other);
	void destroyPet();
public:
	Pet(char* n, unsigned a, char* o, unsigned c);//: Animal(char* n, unsigned a);
	~Pet();
	Pet(Pet& other);
	Pet& operator=(Pet& other);
	void print();
	void changeOwner(char* newOwner);

};

#endif // !PET_H
