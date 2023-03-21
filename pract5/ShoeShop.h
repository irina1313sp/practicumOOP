#include <string>;
#include "PairShoes.h";

const int  MAX_SIZE = 256;

class ShoeShop {
private:
	
	PairShoes shoes[];

public:
	ShoeShop(int max);
	ShoeShop(ShoeShop const& other);
	~ShoeShop();
	ShoeShop& operator=(ShoeShop const& other);
	
	void AddNewPair(PairShoes pair, int amountInStore);
	void SellPair(PairShoes pair);
	void AddExitingPair(PairShoes pair, int amountToAdd);
	void ChangeRating(PairShoes pair, int newRating);
	void RemoveModel(PairShoes pair);




};