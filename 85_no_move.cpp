#include<iostream>
using namespace std;


class Mutex
{

public:

    Mutex()
    {
        cout<<"Mutex Created\n";
    }


    // no copy
    Mutex(const Mutex&) = delete;

    Mutex& operator=(const Mutex&) = delete;


    // no move
    Mutex(Mutex&&) = delete;

    Mutex& operator=(Mutex&&) = delete;

};


int main()
{

    Mutex m1;


    // Mutex m2 = m1;       ERROR
    // Mutex m3 = move(m1); ERROR

}