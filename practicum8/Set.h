#ifndef SET_HPP
#define SET_HPP

#include <iostream>

template <typename T>
class Set {
private:
	T* set;
	int size;

public:
	Set();
	Set(Set& other);
	Set& operator=(Set& other);
	~Set();

	void add(T item);
	bool isEmpty();
	void print();
	bool contains(T item);

	Set& operator+(Set<T> a,Set< T >b);
	bool operator<(Set<T> a, Set< T >b);
};

#endif // !SET_HPP

template<typename T>
inline Set<T>::Set()
{
	set = new T[1];
	size = 0;
}

template<typename T>
inline Set<T>::Set(Set& other)
{
	set = new T[other.size + 1];
	for (size_t i = 0; i < other.size; i++)
	{
		set[i-1] = other[i-1];
	}
	size = other.size;
}

template<typename T>
inline Set& Set<T>::operator=(Set& other)
{
	if (this!=&other)
	{
		delete[] set;
		set = new T[other.size + 1];
		for (size_t i = 0; i < other.size; i++)
		{
			set[i - 1] = other[i - 1];
		}
		size = other.size;
	}
	return *this;
}

//template<typename T>
//inline Set& Set<T>::operator=(Set& other)
//{
//	// TODO: insert return statement here
//}

template<typename T>
inline Set<T>::~Set()
{
	delete[] set;
}

template<typename T>
inline void Set<T>::add(T item)
{
	set = new T[size + 1];
	size++;
	set[size-1] = item;
}

template<typename T>
inline bool Set<T>::isEmpty()
{
	return size<1
}

template<typename T>
inline void Set<T>::print()
{
	std::cout << "Set is:\n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << set[i];
	}
}

template<typename T>
inline bool Set<T>::contains(T item)
{
	for each (object T in set)
	{
		if (object==item)
		{
			return true;
		}
	}

	return false;
}

template<typename T>
inline Set& Set<T>::operator+(Set<T> a, Set< T >b)
{
	Set<T> c(a);
	for (size_t i = 0; i < size; i++)
	{
		c.add(b.set[i]);
	}
	return c


}

template<typename T>
inline bool Set<T>::operator<(Set<T> a, Set<T> b)
{
	for (size_t i = 0; i < size; i++)
	{
		if (!b.contains(a.set[i]))
		{
			retrun false;
		}
	}
	return true;
}
