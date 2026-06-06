#include <iostream>
using namespace std;
// dynamic_cast is needed only when you have a base-class pointer/reference and want to safely access child-specific features. If 
// you're already working with a Developer object or Developer*, no cast is required.

class Employee
{
public:
    virtual ~Employee() {}
};

class Developer : public Employee
{
public:
    void writeCode()
    {
        cout << "Writing Code\n";
    }
};

class Designer : public Employee
{
public:
    void createDesign()
    {
        cout << "Creating Design\n";
    }
};

int main()
{
    Employee* emp = new Designer();

     // Unsafe conversion
    // Developer* dev = (Developer*)emp;
    // Safe conversion
    Developer* dev = dynamic_cast<Developer*>(emp);

    if (dev)
    {
        dev->writeCode();
    }
    else
    {
        cout << "This employee is not a Developer\n";
    }

    delete emp;
    return 0;
}