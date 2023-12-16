#include <iostream>

int length(std::string array[]);

int main()
{
    std::string carSimple[] = {"Corvette", "Mustang", "Camry"};

    std::string car[][3] = {{"Corvette", "Mustang", "Camry"},
                           {"Ferrari", "Lamborghini", "Legion512GbSSD"},
                           {"Linux", "Windows", "Messeratti"}};

    std::cout << sizeof(std::string) << " " << sizeof(carSimple) << "\n";
    std::cout << sizeof(carSimple) / sizeof(std::string) << "\n";

    // Iteration using sizeof()
    for(int i = 0; i < (sizeof(car)/sizeof(car[0])); i++)
    {
        for(int j = 0; j < (sizeof(car[i])/sizeof(std::string)); j++)
        {
            std::cout << car[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    // Iteration using foreach
    for(std::string s : carSimple)
    {
        std::cout << s << " ";
    }

    std::cout << "\n";
}