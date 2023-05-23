#include "Property.h"

Property::Property()
{
	owner = "";
	tangible = 0;
}

Property::Property(std::string o, bool t)
{
	owner = o;
	tangible = t;
}


Property::~Property()
{
}

Property::Property(Property& other)
{
	owner = other.owner;
	tangible = other.tangible;
}

Property& Property::operator=(Property& other)
{
	if (this!=&other)
	{
		owner = other.owner;
		tangible = other.tangible;
	}

	return *this;
}

std::string Property::getOwner()
{
	return owner;
}

bool Property::getTangible()
{
	return tangible;
}
