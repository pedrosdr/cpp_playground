#include <iostream>
using std::cout;

int var = 1;

void func1();
void func2();
template <typename T> void printn(T obj);

int main()
{
    func1();
    func2();
    return 0;
}

void func1()
{
    int var = 2;
    printn(::var);
}

void func2()
{
    int var = 3;
    printn(var);
}

template <typename T> void printn(T obj)
{
    cout << obj << "\n";
}