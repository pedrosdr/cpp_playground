#include <iostream>
#include "headers/utils.h"

// typedef std::string text;
// typedef int integer_number;
using text = std::string;
using integer_number = int;

int main()
{
    text name = "Name";
    print(name);

    integer_number num = 5;
    print(num);

    return 0;
}