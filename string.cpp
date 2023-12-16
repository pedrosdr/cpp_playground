#include <iostream>

int main() 
{
    std::string name = "Pedro Sartori Dias dos Reis";
    std::cout << name.length() << "\n";
    name.insert(0, "@");
    
    for(int i = 0; i < name.length(); i++)
    {
        if(name[i] == ' ') 
        {
            std::cout << "\n";
            continue;
        }

        std::cout << name[i];

    }
    return 0;
}