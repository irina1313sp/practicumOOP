#ifndef MAMAL_H
#define MAMAL_H
#include "Animal.h"
class Mamal :public Animal{
private:
	char* owner;
public:
	Mamal(char* a, int b, int c, char* d, char* e);
	~Mamal()override;

	int eat() const override;
	char* getFood() const override;
};
#endif // !MAMAL_H
