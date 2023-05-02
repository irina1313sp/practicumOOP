#include "Item.h"
#include<cstring>

void Item::copy(Item& other)
{
	id = other.id;
	title = new char[strlen (other.title) + 1];
	for (size_t i = 0; i < strlen(other.title); i++)
	{
		title[i] = other.title[i];
	}
	autor = new char[strlen(other.autor) + 1];
	for (size_t i = 0; i < strlen(other.autor); i++)
	{
		autor[i] = other.autor[i];
	}
	publicationDate = new char[strlen(other.publicationDate) + 1];
	for (size_t i = 0; i < strlen(other.publicationDate); i++)
	{
		publicationDate[i] = other.publicationDate[i];
	}

}

void Item::destroy()
{
	delete[] title;
	delete[] autor;
	delete[] publicationDate;
}

Item::Item()
{
	id = 0;
	title = nullptr;
	autor = nullptr;
	publicationDate = nullptr;
	
}

Item::Item(int _id, char* _title, char* _autor, char* _publication)
{    
	id = _id;
	title = new char[strlen(_title) + 1];
	for (size_t i = 0; i < strlen(_title); i++)
	{
		title[i] = _title[i];
	}
	autor = new char[strlen(_autor) + 1];
	for (size_t i = 0; i < strlen(_autor); i++)
	{
		autor[i] = _autor[i];
	}
	publicationDate = new char[strlen(_publication) + 1];
	for (size_t i = 0; i < strlen(_publication); i++)
	{
		publicationDate[i] = _publication[i];
	}


}

Item::~Item()
{
	destroy();
}

Item& Item::operator=(Item& other)
{
	if (this!=&other)
	{
		destroy();
		copy(other);
	}
	return *this;
}
