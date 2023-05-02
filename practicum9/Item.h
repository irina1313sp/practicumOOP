#ifndef ITEM_HPP
#define ITEM_HPP

class Item {
private:
	int id;
	char* title;
	char* autor;
	char* publicationDate;

	void copy(Item& other);
	void destroy();
public:
	Item();
	Item(int _id, char* _title, char* _autor, char* _publication);
	~Item();
	Item(Item& other);
	Item& operator=(Item& other);

};
#endif // !1
