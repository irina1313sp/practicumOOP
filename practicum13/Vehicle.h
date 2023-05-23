#ifndef VEHICLE_H
#define VEHICLE_H
class Vehicle {
protected:
	int power;
	int weight;
public:
	Vehicle();
	Vehicle(int p, int w);
	virtual ~Vehicle();
	Vehicle(Vehicle& other);
	Vehicle& operator=(Vehicle& other);

	int getPower();
	int getWeight();
	void setPower(int n);

	virtual void startEngine() const = 0;
};
#endif // !VEHICLE_H
