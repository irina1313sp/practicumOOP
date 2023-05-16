#ifndef CARPART_H
#define CARPART_H
#include <cstring>
#include <string>

class CarPart {
protected:

	std::string name;
	std::string manufacturer;
	unsigned year;
	int id;
	static int count;
public:
	 int GetCount();
	CarPart();
	CarPart(std::string a, std::string b, unsigned c);
	//CarPart(CarPart& other);

	virtual void display() const = 0;
};

int CarPart::count = 0;
#endif // !CARPART_H