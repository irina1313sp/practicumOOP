#ifndef JEEP_H
#define JEEP_H
#include "Vehicle.h"

class Jeep : public Vehicle {
private:
	bool is4x4;
public:
	Jeep(int a, int b, int c, int d,bool e);
	Jeep(Jeep& other);
	Jeep& operator=(Jeep& other);
};
#endif // !JEEP_H
