#include <iostream>
#include <vector>

namespace first
{
    void log(std::string txt) 
    {
        std::cout << txt << " - First Namespace\n";
    }

    int i = 10;
}

namespace second
{
    void log(std::string txt) 
    {
        std::cout << txt << " - Second Namespace\n";
    }
}

int main()
{
    using first::log;
    using first::i;
    using std::cout;

    log("Hello Friend!");
    cout << i;
    return 0;
}

