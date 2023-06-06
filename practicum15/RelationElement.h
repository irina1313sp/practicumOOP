#ifndef RELATIONELEMENT_HPP
#define RELATIONELEMENT_HPP
#include <string>
#include <iostream>

template<typename T>
class RelationElement {
	T subject;
	T object;
	std::string relation;

public:
	RelationElement<T>(T a, T b, std::string c) {
		subject = a;
		object = b;
		relation = c;
	}

	void print() {
		std::cout << subject << relation << object;
	}

	template<>
	class RelationElement<int> {
		T subject;
		T object;
		std::string relation;

	public:
		RelationElement<T>(T a, T b, std::string c) {
			subject = a;
			object = b;
			relation = c;
		}

		void print() {
			std::cout << subject << relation << object;
		}


	};
	
};

template<>
class
#endif // !RELATIONELEMENT_HPP

