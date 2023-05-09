#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
private:
	int id;
	int seats;
	int maxSpeed;
	int rent;

	void set(int a, int b, int c, int d);
public:
	Vehicle();
	Vehicle(int a, int b, int c, int d);
	Vehicle(Vehicle& other);
	Vehicle& operator=(Vehicle& other);

	virtual void getPrice() const = 0;
	virtual ~Vehicle();
};
#endif // !VEHICLE_H
