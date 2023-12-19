#include <iostream>

// function declarations
double getTotal(double* array, int arrSize);
// end function declarations

// main
int main()
{
    double myArr[] = {3.4, 5.4, 2.3, 6.7, 1.1};
    std::cout << getTotal(myArr, sizeof(myArr)/sizeof(myArr[0]));

    return 0;
}
// end main

// functions
double getTotal(double* array, int arrSize)
{
    double sum = 0.0;
    for(int i = 0; i < arrSize; i++)
    {
        sum += array[i];
    }

    return sum;
}
// end functions