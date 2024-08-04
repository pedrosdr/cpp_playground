#include <iostream>
#include <functional>
#include <cmath>

void invoke(int a, int b, std::function<void(int,int)> func) 
{
    func(a, b);
}

float apply(float f, std::function<float(float)> func)
{
    return func(f);
}

void sub(int a, int b) 
{
    std::cout << a - b;
}

int main()
{
    invoke(
        2,3,
        [](int a, int b) {
            std::cout << a+b;
        }
    );

    invoke(5,3, sub);

    std::cout << "\n" << apply(5.0, exp); 
    return 0;
}