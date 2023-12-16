#include <iostream>

int main()
{
    const int SIZE = 100;
    std::string foods[SIZE];

    std::fill(foods, foods + SIZE, "Pizza");

    for(std::string s : foods)
    {
        std::cout << s << "\n";
    }

    return 0;
}