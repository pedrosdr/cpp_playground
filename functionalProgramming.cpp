#include <iostream>

template<typename R, typename T>
class Function
{
    public:
        virtual R invoke(T t) = 0;
};


class Function2 : public Function<double, double>
{
    public:
        double invoke(double t) override 
        {
            return t * 3;
        }
};


void action(Function<double, double>* func)
{
    std::cout << func->invoke(5.0);
    delete func;
}


int main()
{
    action(new Function2());
    return 0;
}