// practicum7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Power.h"
#include "Student.h"
#include "Hogwarts.h"

void fightHouses(Hogwarts& hogwarts, const std::string& house1, const std::string& house2) {
	std::cout << "Fight between " << house1 << " and " << house2 << std::endl;
}

int main() {
	Power spell("Expelliarmus", 10);
	Power curse("Cruciatus", 20);
	Power charm("Lumos", 5);

	Hogwarts hogwarts;

	// Add some students
	hogwarts.addStudent(Student("Harry Potter"));
	hogwarts.addStudent(Student("Ron Weasley"));
	hogwarts.addStudent(Student("Hermione Granger"));
	hogwarts.addStudent(Student("Draco Malfoy"));
	hogwarts.addStudent(Student("Luna Lovegood"));

	// Assign them to houses
	hogwarts.assignHouse("Harry Potter", "Gryffindor");
	hogwarts.assignHouse("Ron Weasley", "Gryffindor");
	hogwarts.assignHouse("Hermione Granger", "Gryffindor");
	hogwarts.assignHouse("Draco Malfoy", "Slytherin");
	hogwarts.assignHouse("Luna Lovegood", "Ravenclaw");

	// Give them powers
	hogwarts.givePower("Harry Potter", spell);
	hogwarts.givePower("Ron Weasley", spell);
	hogwarts.givePower("Hermione Granger", curse);
	hogwarts.givePower("Draco Malfoy", curse);
	hogwarts.givePower("Luna Lovegood", charm);

	fightHouses(hogwarts, "Gryffindor", "Slytherin");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
