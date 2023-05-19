#ifndef BIRD_h
#define BIRD_h
#include <string>
#include <cstring>
#include "Animal.h"

class Bird :public Animal {
private:
	std::string city;
public:
	Bird(char* a, int b, int c, char* d, std::string e);
	~Bird() override;

	int eat() const override;
	char* getFood() const override;
};
#endif // !BIRD_h
