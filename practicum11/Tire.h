#ifndef TIRE_H
#define TIRE_H
#include "CarPart.h"
#include <string>
class Tire :public CarPart{
private:
	unsigned width;
	std::string profile;
	unsigned diameter;
public:
	Tire();
	Tire(std::string a, std::string b, unsigned c, unsigned d
		, std::string e, unsigned f);
	void display() const override;

};
#endif // !TIRE_H
