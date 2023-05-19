#ifndef ZOOSECTOR_H
#define ZOOSECTOR_H
#include "Animal.h";
#include <vector>
class ZooSector {
private:
	Animal** animals;
	int size;
	int capacity;
	int x, y;
public:
	ZooSector(int a, int b, int cap);
	void addAnimal(Animal* other);
	void print();
};
#endif // !ZOOSECTOR_H
