#include<iostream>
using namespace std;


int main()
{

    int a,b;

    cout<<"Enter numbers: ";
    cin>>a>>b;


    try
    {

        if(b==0)
        {
            throw "Cannot divide by zero";
        }

        cout<<"Result = "<<a/b;

    }


    catch(const char* msg)
    {

        cout<<"Error: "<<msg;

    }


    return 0;
}
