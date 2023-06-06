#include "BrokenDevice.h"

void BrokenDevice::set(std::string d, unsigned e)
{
	symptoms = d;
	neededDays = e;
}

BrokenDevice::BrokenDevice():Device()
{
	symptoms = "none";
	neededDays = 0;
}

BrokenDevice::BrokenDevice(std::string a, std::string b, double c, std::string d, unsigned e)
	:Device(a,b,c)
{
	set(d, e);
}

BrokenDevice::BrokenDevice(BrokenDevice& other):Device(other)
{
	set(other.symptoms, other.neededDays);
}

BrokenDevice& BrokenDevice::operator=(BrokenDevice& other)
{
	if (this!=&other)
	{
		Device::operator=(other);
		set(other.symptoms, other.neededDays);
	}
	return *this;
}
