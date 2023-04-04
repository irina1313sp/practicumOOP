#include <iostream>
#include <string>

#include "Power.h"
#include "Student.h"

class Hogwarts {
private:
	Student* students;
	size_t size;
	size_t capacity;
	void clear(){

		delete[] students;
		students == nullptr;
		size = 0;
		capacity = 0;
	}

	void copy(const Hogwarts& other) {
		size = other.size;
		capacity = other.capacity;
		size = other.size;
		this->students = new Student[];
		for (size_t i = 0; i < size; i++)
		{
			students[i] = other;
		}

	}
	;
public:
	Hogwarts() :students(nullptr), size(0), capacity(0){
	};
	Hogwarts(const Hogwarts& other) {
		copy(other);
	};
	Hogwarts(Hogwarts&& other) {
		students = other.students;
		this->capacity = other.capacity;
		this->size = other.size;

		other.students == nullptr;// clear bez delete []students
		other.size = 0;
		other.capacity = 0;
	};
	Hogwarts& operator=(const Hogwarts& other) {
		if (this!=&other)
		{
			this->clear();
			this->copy(other);
		}
	};
	Hogwarts& operator=(Hogwarts&& other) {
		if (this!=&other)
		{
			clear();


		}
	};
	~Hogwarts() {
		clear();

	};

	friend std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts) {
		for (size_t i = 0; i < hogwarts.getHouseStudentsCount; i++)
		{
			out << hogwarts.students[i].getName() << "from: " << studens[i].getHouse();
		}
	};

	void addStudent(const Student& student) {
		if (capacity==size+1)
		{
			if (capacity!=0)
			{
				capacity *= 2;

			}
			else {
				capacity = 2;
			}
		}
		students[size] = student;
		size++;
	}
	void assignHouse(const std::string& studentName, const std::string& house) {
		for (size_t i = 0; i < size; i++)
		{
			if (students[i]->name==studentName)
			{
				students[i]->setHouse(house);
				break;
			}
		}
	}
	void givePower(const std::string& name, const Power& power) {
		for (size_t i = 0; i < size; i++)
		{
			if (students[i]->name == name)
			{
				students[i]->setPower(power);
				break;
			}
		}
	}

	int getHouseStudentsCount(const std::string& house) const {
		int count;
		for (size_t i = 0; i < size; i++)
		{
			if (students[i]->house==house)
			{
				count++;
			}
		}
		return count;

	}
	Student* getFirstStudent(const std::string& house) const {
		for (size_t i = 0; i < size ; i++)
		{
			if (students[i]->house==house)
			{
				return students[i];
			}
		}
	}
	const Student* getStudents();
	bool removeStudent(const std::string& name) {
		for (size_t i = 0; i < size; i++)
		{
			if (students[i]->name==name)
			{
				for (size_t j = size; j > i; j--)
				{
					students[j] = students[j + 1];
				}
				return true;
			}
		}
	}
};
