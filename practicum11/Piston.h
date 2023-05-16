#ifndef  PISTON_H
#define  PISTON_H
#include "CarPart.h"
#include <string>
class Piston :public CarPart {
private:
	unsigned diameter;
	unsigned hod; //?
public:
	Piston();
	Piston(std::string a, std::string b, unsigned c, unsigned d
		, unsigned f);

	void display() const override;
};
#endif // ! PISTON_H
