#ifndef SPORTS_CAR_H
#define SPORTS_CAR_H
#include "Vehicle.h"
#include <cstring>


class SportsCar :public Vehicle {
private:
	char* model;

	void copy(char* other);
	void destroy();
public:

	SportsCar(int a, int b, int c, int d, char* name);
	SportsCar(SportsCar& other);
	SportsCar& operator=(SportsCar& other);
	~SportsCar() override;


};
#endif // !SPORTS_CAR_H
