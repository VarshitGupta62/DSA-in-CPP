#include "Student.h"


void Student::setName(std::string n)
{
    name = n;
}


void Student::display()
{
    std::cout << "Student Name: " << name << std::endl;
}