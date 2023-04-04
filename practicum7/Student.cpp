#include "Power.h";

#include <cstring>;
class Student {
private:
	std::string& name;
	std::string& house;
	const Power* power;
	int health;
public:
	Student() :name(""), health(100), power(nullptr), house("") {
	};
	Student(const std::string& name) :name(name), health(100), power(nullptr), house("") {
	};

	const std::string& getName() { return name; };
	const std::string& getHouse() { return house; };
	void setHouse(const std::string& house) { this-> house=house; };
	int getHealth() { return health; };
	void takeDamage(int damage) { this->health -= damage; };
	void setPower(const Power* power) { this->power = power;; };
	const Power* getPower() { return power; };
	bool isAlive();
	int attack() {return this->power->getDamage()};
};
