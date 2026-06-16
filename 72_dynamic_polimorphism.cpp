#include<iostream>
using namespace std;


class Payment
{

public:

    virtual void pay()
    {
        cout<<"Payment processing"<<endl;
    }

};



class UPI : public Payment
{

public:

    void pay()
    {
        cout<<"Pay using UPI"<<endl;
    }

};



class Card : public Payment
{

public:

    void pay()
    {
        cout<<"Pay using Card"<<endl;
    }

};



int main()
{

    Payment *p;


    UPI u;

    Card c;


    p=&u;

    p->pay();


    p=&c;

    p->pay();


}