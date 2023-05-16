#include "CarPart.h"

CarPart::CarPart()
{
	name = manufacturer = "";
	year = 0;
	id = count++;
}


CarPart::CarPart(std::string a, std::string b, unsigned c)
{
	name = a;
	manufacturer = b;
	year = c;
	id = count++;
}
