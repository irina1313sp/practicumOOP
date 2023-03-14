// practicum4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Matrix.h"

int main()
{
    Matrix a(2, 2);
    a(0, 0) = 1;
    a(0, 1) = 2;
    a(1, 0) = 3;
    a(1, 1) = 4;
    print(a);

    Matrix b(2, 2);
    b(0, 0) = 5;
    b(0, 1) = 6;
    b(1, 0) = 7;
    b(1, 1) = 8;
    print(b);

    Matrix c = a + b;
    print(c);

    Matrix d = a - b;
    print(d);

    Matrix e = a * b;
    print(e);

    if (a == b) {
        std::cout << "a is equal to b" << std::endl;
    }
    else {
        std::cout << "a is not equal to b" << std::endl;
    }

    Matrix f = a;
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
