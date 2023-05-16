#include "Engine.h"
#include <iostream>
Engine::Engine():CarPart()
{
	power = 0;
	std::vector <Piston> pistons;
}

Engine::Engine(std::string a, std::string b, unsigned c, unsigned d)
	:CarPart(a,b,c)
{
	power = d;
	std::vector <Piston> pistons;
}

void Engine::addPiston(Piston& piston)
{
	pistons.push_back(piston);
}

void Engine::display() const
{
	std::cout << power;
	for (size_t i = 0; i < pistons.size(); i++)
	{
		pistons[i].display();
	}
}
