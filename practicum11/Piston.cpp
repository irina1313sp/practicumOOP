#include "Piston.h"

Piston::Piston():CarPart()
{
	diameter = hod = 0;
}

Piston::Piston(std::string a, std::string b, unsigned c, unsigned d, unsigned f)
	:CarPart(a,b,c)
{
	diameter = d;
	hod = f;
}
