#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
protected:
	char* name;
	int weight;
	int years;
	char* food;

	static int count;
public:
	Animal(char* a, int b, int c, char* d);
	virtual ~Animal();
	char* getName();

	virtual int eat() const = 0;
	virtual char* getFood() const = 0;

	int getCount();
};

int Animal::count = 0;
#endif // !ANIMAL_H
