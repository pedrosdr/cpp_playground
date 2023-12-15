#include <iostream>

// typedef std::string text;
// typedef int integer_number;
using text = std::string;
using integer_number = int;

template<typename T> void print(T item) {
    try
    {
        std::cout << item << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
}

int main()
{
    text name = "Name";
    print(name);

    integer_number num = 5;
    print(num);


    return 0;
}