#include<iostream>
using namespace std;

// A virtual function allows the child class function to run when using parent pointer.

class Animal
{
public:

    virtual void sound()
    {
        cout<<"Animal makes sound"<<endl;
    }

};


class Dog : public Animal
{

public:

    void sound()
    {
        cout<<"Dog barks"<<endl;
    }

};


int main()
{

    Animal *a;

    Dog d;

    a = &d;


    a->sound();

}