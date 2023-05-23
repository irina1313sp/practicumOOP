#ifndef PROPERTY_H
#define PROPERTY_H
#include <string>
class Property {
protected:
	std::string owner;
	bool tangible;
public:
	Property();
	Property(std::string o, bool t);
	virtual ~Property();
	Property(Property& other);
	Property& operator=(Property& other);

	std::string getOwner();
	bool getTangible();
	
};
#endif // !PROPERTY_H
