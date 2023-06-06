#ifndef DEVICE_HPP
#define DEVICE_HPP
#include <string>

class Device {
protected:
	std::string manufacturer;
	std::string model;
	double price;

	void set(std::string a, std::string b, double c);
public:
	Device();
	Device(std::string a, std::string b, double c);
	Device(Device& other);
	Device& operator=(Device& other);

	void setManfuacturer(std::string man);
	void setModel(std::string mod);
	void setPrice(double pri);

	std::string const getManfuacturer();
	std::string const getModel();
	int const getPrice();
};

#endif // !DEVICE_HPP
