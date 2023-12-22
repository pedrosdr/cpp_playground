#include <iostream>

enum Day 
{
    MONDAY = 0,
    TUESDAY = 1,
    WEDNESDAY = 2
};

enum Flavor {vanilla, chocolate, strawberry, mint};

int main()
{
    Day day = Day::MONDAY;

    if(day == Day::MONDAY)
    {
        std::cout << "True\n";
    }

    Flavor flavor = Flavor::vanilla;

    if(flavor == Flavor::vanilla)
    {
        std::cout << "True\n";
    }

    return 0;
}