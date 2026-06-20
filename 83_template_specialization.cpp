#include<iostream>
using namespace std;


template<class T>
void show(T value)
{
    cout<<"Normal: "<<value<<endl;
}


// specialization
template<>
void show<string>(string value)
{
    cout<<"String: "<<value<<endl;
}


int main()
{
    show(50);

    show("Hello");
}