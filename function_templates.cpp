#include <iostream>

template <typename T, typename U> T max(T x, U y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max('b', 109);
    return 0;
}