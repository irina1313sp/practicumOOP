// pract5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>


//1
//int getSize(const char* name) {
//    std::ifstream if_stream(name);
//  
//    if (!if_stream)
//    {
//        std::cout << "problem";
//        return -1;
//    }
//
//    int size = 0;
//    while (!if_stream.eof())
//    {
//        char c; 
//        if_stream.get(c);
//        size++;
//    }
//    return size;
//    if_stream.close();
//}


int getSize(const char* name) {
    std::ifstream if_stream(name);

    if (!if_stream)
    {
        std::cout << "problem";
        return -1;
    }

    if_stream.seekg(0, std::ios::end);
    return if_stream.tellg();

}


void SelfPrint() {
    std::ifstream if_stream("F:\Programming\OOP.FMI\pract5\pract5");
    if (!if_stream)
    {
        std::cout << "error";
        return;
    }

    char c;
    if_stream.get(c);
    std::cout << c;
    if_stream.close();

}
int main()
{
    std::cout << "the size is: " << getSize("oop5.txt");
    SelfPrint();
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
