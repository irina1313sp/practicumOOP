// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>


                            //1 zad.
class f1car {
private:
    std::string name;
    int year;
    int wins;
    int engine_capacity;
};

class f1team {
    std::string name;
    f1car cars[2];


    //team.bin
    bool writeteamdown() {
        std::ofstream file("team.bin", std::ios::binary);
        if (!file.is_open())
        {
            std::cout << "error ocured whilst opening file<3\n";
            return false;
        }
        file.write((char*)this, sizeof(this));
        file.close();
        return true;
    }

    bool bringteamout() {
        std::ofstream file("team.bin", std::ios::binary);
        if (!file.is_open())
        {
            std::cout << "error\n";
            return false;
        }
        file.read((char*)this, sizeof(this));
        file.close();
        return true;
    }


};

class SimpleVector {
    int* data[10];
    int size;      //= sizeof(data);

    SimpleVector& operator+(const SimpleVector& v) {
        if (size != v.size)
        {
            throw std::exception("wrong size<3");
        }
        for (int i = 0; i < size; i++)
        {
            data[i] += v.data[i];
        }
    }

    SimpleVector& operator-(const SimpleVector& v) {
        if (size != v.size)
        {
            throw std::exception("wrong size<3");
        }
        for (int i = 0; i < size; i++)
        {
            data[i] -= v.data[i];
        }
    }

    SimpleVector& operator*(int n) {

        for (int i = 0; i < size; i++)
        {
            data[i] *= n;
        }
    }

    void const print() {
        for (int i = 0; i < size; i++)
        {
            std::cout << data[i] << " ";
        }
        std::cout << "\n";
    }

    void printInFile() {
        std::ofstream file("vector.bin", std::ios::binary);
        if (!file.is_open())
        {
            std::cout << "error<3";
        }
        file.write((char*)this, sizeof(this));
        file.close();
    }

    void readFromFile() {
        std::ofstream file("vecter.bin", std::ios::binary);
        if (!file.is_open())
        {
            std::cout << "error <3";
        }
        file.read((char*)this, sizeof(this));
        file.close();
    }
};

int main()
{
    std::cout << "Hello World!\n";
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
