#include "Device.h"
#include "Device1.h"

void Device::set(std::string a, std::string b, double c)
{
	manufacturer = a;
	model = b;
	price = c;
}

Device::Device()
{
	copyArr(manufacturer, nullptr, 0, 0);
	copyArr(model, nullptr, 0, 0);
	price = 0;
}

Device::Device(char* a, char* b, double c)
{
	copyArr(manufacturer, a, sizeManufacturer, strlen(a));
}

Device::Device(Device& other)
{
	set(other.manufacturer, other.model, other.price);
}

Device& Device::operator=(Device& other)
{
	if (this != &other)
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

void Device::copyArr(char* r1, char* r2, int size,  int sizeTo)
{
	r1 = new char[strlen(r2) + 1];
	strcpy(r1, r2);
	size = sizeTo;
}

void Device::copy(Device& other)
{
	copyArr(manufacturer, other.manufacturer, sizeManufacturer, other.sizeManufacturer);
	copyArr(model, other.model, sizeModel, other.sizeModel);
	
	price = other.price;
}

void Device::destroy()
{
	delete[] manufacturer;
	delete[] model;
}
