#include <iostream>
#include <functional>

void invoke(int a, int b, std::function<void(int,int)> func) 
{
    func(a, b);
}

int main()
{
    invoke(
        2,3,
        [](int a, int b) {
            std::cout << a+b;
        }
    );
    return 0;
}