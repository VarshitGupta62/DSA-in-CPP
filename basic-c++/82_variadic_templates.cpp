#include<iostream>

using namespace std;


template<typename... Args>

void print(Args... args)
{
    (cout<< ... << args);
}


int main()
{
    print(10," Hello ",20);
}