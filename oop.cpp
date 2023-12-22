#include <iostream>

class Human
{
    public:
        // fields
        std::string name;
        int age;

        // constructors
        Human()
        {
        }

        Human(std::string name, int age)
        {
            this->name = name;
            this->age = age;
        }

        // methods
        void sayHi()
        {
            std::cout << "Hello, I'm " << name << " and I'm " << age << " years old.\n";
        }
};

int main()
{
    Human* h1 = new Human("Jonathan", 23);
    Human h2 = Human("Joel", 56);
    Human h3("Maria", 12);

    h1->sayHi();
    h2.sayHi();
    (*h1).sayHi();
    h3.sayHi();
    (&h2)->sayHi();

    delete h1;
    
    return 0;
}