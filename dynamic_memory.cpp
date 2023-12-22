#include <iostream>

int main()
{
    char *pGrades = NULL;
    pGrades = new char[5];

    for(int i = 0; i < 5; i++)
    {
        std::cout << "Enter the grade: ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < 5; i++)
    {
        std::cout << pGrades[i];
        // std::cout << "Grade " << i << ": " << pGrades[i] << "\n";
    }

    delete pGrades;

    return 0;
}