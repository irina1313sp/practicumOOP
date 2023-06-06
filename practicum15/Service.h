#ifndef SERVICE_HPP
#define SERVICE_HPP
#include "BrokenDevice.h"
#include "Device.h"
#include<vector>

class Service {
private:
	Device** devices;
	BrokenDevice** brokenDevices;
public:
	Service();


};
#endif // !SERVICE_HPP
