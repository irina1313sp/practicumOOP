
class Power {
private:
	char* name;
	double damage;
public:
	Power(const std::string& name, int damage):name(name);

	const std::string& getName() { return name; };
	int getDamage() { return damage; };

	bool operator<(const Power& other)
	{
		return this->damage < other.damage;
	};
};
