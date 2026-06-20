#include<iostream>
using namespace std;


class Father
{
public:
    void fatherProperty()
    {
        cout<<"Father property: House\n";
    }
};


class Mother
{
public:
    void motherProperty()
    {
        cout<<"Mother property: Car\n";
    }
};


class Child : public Father, public Mother
{

};


int main()
{
    Child c;

    c.fatherProperty();
    c.motherProperty();

    return 0;
}