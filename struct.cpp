#include <iostream>

struct Student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

void printStudent(Student &student)
{
    std::cout 
        << "Student: " 
        << student.name 
        << ", gpa = " 
        << student.gpa << ", " 
        << (student.enrolled ? "Enrolled" : "Not enrolled") 
        << "\n";
}

int main()
{
    Student s1, s2;
    s1.name = "Joel";
    s1.gpa = 3.2;
    s1.enrolled = true;

    s2.name = "Marlene";
    s2.gpa = 7.3;
    s2.enrolled = false;

    printStudent(s1);
    printStudent(s2);

    return 0;
}