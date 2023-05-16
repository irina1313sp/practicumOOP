#ifndef ENGINE_H
#define ENGINE_H
#include "CarPart.h"
#include "Piston.h"
# include <vector>

class Engine : CarPart {
private:
	unsigned power;
	std::vector <Piston> pistons;
public:
	Engine();
	Engine(std::string a, std::string b, unsigned c, unsigned d);
	void addPiston(Piston& piston);
	void display() const override;
};
#endif // !ENGINE_H
