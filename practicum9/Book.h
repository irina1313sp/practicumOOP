#ifndef  BOOK_HPP
#define  BOOK_HPP
#include "Item.h"

class Book : public Item {
private:
	char* ganre;
	void copyBook();
	void destroy();
};
#endif // ! BOOK_HPP
