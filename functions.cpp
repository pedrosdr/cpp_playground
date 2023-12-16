#include <iostream>
#include <ctime>

double multiply(double a, double b);
int multiply(int a, int b);
std::string str_concat(std::string str1, std::string str2, std::string sep);
std::string str_concat(std::string str1, std::string str2);

int main()
{
    srand(time(NULL));
    std::cout << multiply(5.4, 2.3) << "\n";
    std::cout << multiply(2, 3) << "\n";
    std::cout << str_concat("Pedro", "Sartori", "-") << "\n";
    std::cout << str_concat("Pedro", "Sartori") << "\n";

    return 0;
}

double multiply(double a, double b)
{
    return a * b;
}

int multiply(int a, int b) 
{
    return a * b;
}

std::string str_concat(std::string str1, std::string str2) 
{
    return str1 + " " + str2;
}

std::string str_concat(std::string str1, std::string str2, std::string sep)
{
    return str1 + sep + str2;
}