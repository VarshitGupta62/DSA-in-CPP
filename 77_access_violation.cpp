#include<iostream>
using namespace std;


int main()
{

    int *ptr = nullptr;


    try
    {

        if(ptr==nullptr)
        {
            throw "Invalid memory access";
        }


        cout<<*ptr;

    }


    catch(const char* error)
    {

        cout<<error;

    }


    return 0;
}