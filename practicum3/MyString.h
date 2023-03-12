#ifndef MUSTRING_
#define MUSTRING_

class MyString {
private:
	char* arr[256];
public:
	MyString(const char* str);
	int lenght();
	char& at(unsigned indx);
	int find(char c, unsigned startPos = 0);
	bool empty();
	 MyString substr(unsigned pos = 0, unsigned n = 0);
	 void append(const MyString& str);
	 void print();

};

#endif