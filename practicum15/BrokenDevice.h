#ifndef BROKENDEVICE_HPP
#define BROKENDEVICE_HPP
#include"Device.h"
#include <string>

class BrokenDevice:public Device {
	std:: string symptoms;
	unsigned neededDays;

	void set(std::string d, unsigned e);
public:
	BrokenDevice();
	BrokenDevice(std::string a, std::string b, double c, std:: string d, unsigned e);
	BrokenDevice(BrokenDevice& other);
	BrokenDevice& operator=(BrokenDevice& other);
};

#endif // !BROKENDEVICE_HPP
