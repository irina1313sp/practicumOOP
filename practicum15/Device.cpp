#include "Device.h"

void Device::set(std::string a, std::string b, double c)
{
	manufacturer = a;
	model = b;
	price = c;
}

Device::Device()
{
	manufacturer = "none";
	model = "none";
	price = 0;
}

Device::Device(std::string a, std::string b, double c)
{
	set(a, b, c);
}

Device::Device(Device& other)
{
	set(other.manufacturer, other.model, other.price);
}

Device& Device::operator=(Device& other)
{
	if (this!=&other)
	{
		set(other.manufacturer, other.model, other.price);
	}
	return *this;
}

void Device::setModel(std::string mod)
{
	model = mod;
}

void Device::setPrice(double pri)
{
	price = pri;
}

std::string const Device::getManfuacturer()
{
	return manufacturer;
}

std::string const Device::getModel()
{
	return model;
}

int const Device::getPrice()
{
	return price;
}

void Device::setManfuacturer(std::string man)
{
	manufacturer = man;
	
}
