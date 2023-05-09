#ifndef VAN_H
#define VAN_H
#include "Vehicle.h"

class Van :public Vehicle {
private:
	int trunkCapacity;
public:
	Van(int a, int b, int c, int d, int e);
	Van(Van& other);
	Van& operator=(Van& other);

};
#endif // !VAN_H
