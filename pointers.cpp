#include <iostream>

int main()
{
    std::string name = "Pedro";
    std::string* pName = &name;
    std::string freePizzas[] = {"Pizza 1", "Pizza 2", "Pizza 3", "Pizza 4"};

    int age = 25;
    int* pAge = &age;

    std::cout << *pName << " -> " << pName << "\n";
    std::cout << *pAge << " -> " << pAge << "\n";
    std::cout << *freePizzas << "\n";


    // Null pointers
    int* pointer = nullptr;
    std::cout << (pointer == nullptr) << "\n";
    
    return 0;
}