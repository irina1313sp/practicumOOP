#ifndef TRIPLE_H
#define TRIPLE_H

template<typename T1, typename T2, typename T3>
class Triple {
private:

	T1 first;
	T2 second;
	T3 third;

public:
	Triple(T1 a, T2 b, T3 c);
};
#endif // !TRIPLE_H

template<typename T1, typename T2, typename T3>
inline Triple<T1, T2, T3>::Triple(T1 a, T2 b, T3 c)
{
	first = a;
	second = b;
	third = c;
}
