#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string name = "Pedro";
    int age = 25;
    bool student = true;

    std::cout << &name << " " << &age << " " << &student << "\n";

    // pass by value vs pass by reference
    std::string x = "Kool-Aid";
    std::string y = "Water";
    
    swap(x, y);
    
    std::cout << "X: " << x << "\nY: " << y;
    return 0;
}

void swap(std::string &x, std::string &y)
{
    std::string temp = x;
    x = y;
    y = temp;
}