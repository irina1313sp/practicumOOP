#include <string>

const int  MAX_SIZE = 256;

class PairShoes
{
public:
	PairShoes(std::string ma, std::string mo,double p, double r,  int amountInStore);
	

private:
	std::string maker;
	std::string model;
	double price;
	double rating;
	int pairsInStore;
};

//PairShoes::PairShoes(int amountInStore)
//{
//}

