#include<iostream>
using namespace std;


class Person
{
public:

    void show()
    {
        cout<<"I am Person\n";
    }

};


class Student : virtual public Person
{

};


class Teacher : virtual public Person
{

};


class Assistant : public Student, public Teacher
{

};


int main()
{

    Assistant a;

    a.show();

    return 0;
}