#ifndef SPARK_H
#define SPARK_H
#include "Vehicle.h"

class Spark {
private:
	Vehicle** vehicles;
	int size;

	void copy(Vehicle**& other);

};

#endif // !SPARK_H
