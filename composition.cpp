#include <iostream>

class Animal {
    public:
        Animal() {};

        void breathe() {
            std::cout << "The animal breathed\n";
        }
};

class Duck : public Animal {
    public:
        Duck() : Animal() {};

        void quack() {
            std::cout << "The duck quaqued!\n";
        }
};

struct AnimalStruct {
    void breathe() {
        std::cout << "The animal breathed (Struct)\n";
    };
};

struct DuckStruct {
    void quack() {
        std::cout << "The Duck quacked! (Struct)\n";
    };

    AnimalStruct animal = AnimalStruct();
};

int main() {

    // Duck* duck = new Duck();
    // duck->breathe();
    // duck->quack();
    // delete duck;

    DuckStruct duck = DuckStruct();
    duck.animal.breathe();
    duck.quack();

    return 0;
}