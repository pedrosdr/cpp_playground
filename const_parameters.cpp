#include <iostream>

void printInfo(const std::string &name, const int &age);

int main()
{
    std::string name = "Pedro";
    int age = 25;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string &name, const int &age)
{
    // name = "";
    // age = 0;
    std::cout << "Name: " << name << "\n" << "Age: " << age << "\n";
}
