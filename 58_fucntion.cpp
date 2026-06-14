#include <iostream>

using namespace std;

class Employee
{
public:
    int salary;
    string name;

    void display()
    {
        cout << "Employee name is : " << name << endl;
        cout << "Employee salary is : " << salary;
    }
};

int main()
{
    Employee emp1;

    emp1.name = "Varshit";
    emp1.salary = 75000;

    emp1.display();

    return 0;
}