#include <iostream>

class Student
{
    private:
        std::string name;
        int age;
        double grade;

        Student() {}
    public:
        static Student* getStudent()
        {
            return new Student();
        }

        std::string Name()
        {
            return name;
        }

        std::string Name(std::string value)
        {
            name = value;
            return name;
        }

        int Age()
        {
            return age;
        }

        int Age(int value)
        {
            age = value;
            return age;
        }

        double Grade()
        {
            return grade;
        }

        double Grade(double value)
        {
            grade = value;
            return grade;
        }

        void sayHi()
        {
            std::cout << "Hello, I'm " << name << ", I'm " << age << " years old and my grade is " << grade << "\n";
        }
};

int main()
{
    Student* s1 = Student::getStudent();
    s1->Name("Daniel");
    s1->Age(23);
    s1->Grade(9.5);

    s1->sayHi();

    delete s1;
    return 0;
}