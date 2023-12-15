#include <iostream>

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