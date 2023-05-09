#include "Spark.h"

void Spark::copy(Vehicle**& other)
{
	vehicles = new Vehicle * [other.size + 1];
}
