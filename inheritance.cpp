#include <iostream>

class Animal
{
    public:
        bool alive = true;

        virtual void eat()
        {
            std::cout << "This Animal is eating!\n";
        }
};

class Dog : public Animal
{
    public:
        void bark()
        {
            std::cout << "The dog barked\n";
        }
};

class Cat: public Animal
{
    public:
        void eat() override
        {
            std::cout << "This Cat is eating!\n";
        }

        void meow()
        {
            std::cout << "The cat meowed!\n";
        }
};

int main()
{
    Dog* a = new Dog();

    std::cout << a->alive << "\n";
    a->eat();
    a->bark();

    Animal* a2 = new Dog();
    ((Dog*) a2)->bark();

    // Downcasting
    Animal* a3 = a;
    a3->eat();

    // Upcasting
    Dog* d1 = (Dog*) a2;
    d1->bark();

    delete a;
    delete a2;
    delete a3;
    delete d1;

    // Polymorphism
    std::cout << "\n\n\n";
    Animal* cat = new Cat();
    cat->eat();
    delete cat;

    return 0;
}