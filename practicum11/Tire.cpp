#include "Tire.h"
#include <iostream>
Tire::Tire():CarPart()
{
	width = diameter = 0;
	profile = "";
}

Tire::Tire(std::string a, std::string b, unsigned c, unsigned d, std::string e, unsigned f)
	:CarPart(a, b, c)
{
	width = d;
	profile = e;
	diameter = f;
}

void Tire::display() const
{
	std::cout << CarPart::name;
}
