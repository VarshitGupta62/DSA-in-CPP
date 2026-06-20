#include<iostream>
using namespace std;

int main()
{
    int age = 10;

    if(age < 18)
    {
        cout<<"Not allowed\n";
        return 1;   // error code
    }

    cout<<"Allowed\n";

    return 0;  // success
}