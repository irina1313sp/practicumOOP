#ifndef DICTIONARY_HPP
#define DICTIONARY_HPP

template <typename T1, typename T2>
class Dictionary {
private:
	T1* keys[100];
	T2* values[100];
	int size;


public:
	Dictionary();

	void add(T1 key, T2 value);
	void remove(T1 key);
	bool contains(T1 key);
	int size();

};

#endif // !DICTIONARY_HPP

template<typename T1, typename T2>
inline Dictionary<T1, T2>::Dictionary()
{
	size = 0;
}

template<typename T1, typename T2>
inline void Dictionary<T1, T2>::add(T1 key, T2 value)
{
	bool contains = false;

	//replace
	for (size_t i = 0; i < size-1; i++)
	{
		if (keys[i]==key)
		{
			values[i] = value;
			contains = true;
		}
	}

	//add
	if (!contains)
	{
		size++;
		keys[size - 1] = key;
		values[size - 1] = values;
	}



}

template<typename T1, typename T2>
inline void Dictionary<T1, T2>::remove(T1 key)
{
	int j = 0;
	for (size_t i = 0; i < size-1; i++)
	{
		if (kays[i]==key)
		{
			j = i;
		}
	}

	for (size_t i = j; i < size-1; i++)
	{
		keys[i + 1] = keys[i];
		values[i + 1] = values[i];
	}

	size--;
}

template<typename T1, typename T2>
inline bool Dictionary<T1, T2>::contains(T1 key)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		if (keys[i] == key)
		{
			return true;
		}
	}
	return false;
}

template<typename T1, typename T2>
inline int Dictionary<T1, T2>::size()
{
	return size;
}
