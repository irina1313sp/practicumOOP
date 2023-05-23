#ifndef CAR_H
#define CAR_H
#include "Property.h"
#include "Vehicle.h"
#include <string>
class Car:public Property, Vehicle {
private:
	char* manufacturer;
	int sizeMan;
	char* model;
	int sizeMod;

	void copy(char* man, char* mod);
	void destroy();
public:
	Car(int power, int weight, std::string owner, bool tangible, char* man, char* mod);
	virtual ~Car();
	Car(Car& other);
	Car& operator=(Car& other);

	void startEngine() const override;
};
#endif // !CAR_H
