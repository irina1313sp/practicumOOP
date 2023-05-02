#ifndef ANIMAL_H
#define ANIMAL_H
#include<cstring>
class Animal {
public:
	char* name;
	unsigned age;


	void copy(Animal& other);
	void destroy();

	Animal();
	Animal(char* n, unsigned a);
	~Animal();
	Animal(Animal& other);
	Animal& operator=(Animal& other);

	void rename(char* newName);
};
#endif // !ANIMAL_H
