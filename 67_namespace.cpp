#include<iostream>
using namespace std;


namespace Student
{
    string name = "Varshit";

    void display()
    {
        cout<<"Student Name: "<<name<<endl;
    }
}


namespace Teacher
{
    string name = "Amit";

    void display()
    {
        cout<<"Teacher Name: "<<name<<endl;
    }
}


int main()
{
    Student::display();

    Teacher::display();

    return 0;
}