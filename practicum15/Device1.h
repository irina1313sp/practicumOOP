#ifndef DEVICE1_HPP
#define DEVICE_HPP
#include <string>
#include <cstring>

/// <summary>
/// не е довършен този вариант
/// 
///v kahoot sym irina(:
/// </summary>

class Device {
protected:
	char* manufacturer;
	int sizeManufacturer;
	char* model;
	int sizeModel;
	double price;

	void copyArr(char* r1, char* r2, int size,int sizeTo);
	void copy(Device& other);
	void destroy();
	void set(std::string a, std::string b, double c);
public:
	Device();
	Device(char* a, char* b, double c);
	Device(Device& other);
	Device& operator=(Device& other);

	void setManfuacturer(std::string man);
	void setModel(std::string mod);
	void setPrice(double pri);

	std::string const getManfuacturer();
	std::string const getModel();
	int const getPrice();
};

#endif // !DEVICE1_HPP
