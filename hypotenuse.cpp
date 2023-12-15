#include <iostream>
#include <cmath>
#include "headers/utils.h"

int main() 
{
    double a, b;
    std::cout << "Enter the size of A: ";
    std::cin >> a;

    std::cout << "Enter the size of B: ";
    std::cin >> b;

    double hyponenuse = sqrt(pow(a, 2) + pow(b, 2));

    std::printf("The hypotenuse is %.2f", hyponenuse);

    return 0;
}