#include <iostream>

class Person
{ 
    public:
        // fields
        std::string name;
        int age;

        // constructors
        Person(std::string name, int age)
        {
            this->age = age;
            this->name = name;
        }
};

class Student : public Person
{
    public:
        // fields
        std::string school;

        // constructors
        Student(std::string name, int age, std::string school) : Person(name, age)
        {
            this->school = school;
        }
};

int main()
{
    Student* student = new Student("Jonathan", 23, "Pringlestown Highschool");
    std::cout << student->name << ", " << student->age << " years old, " << student->school << "\n";
    delete student;
    return 0;
}