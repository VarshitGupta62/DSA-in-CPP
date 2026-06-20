#include <iostream>
using namespace std;

int main()
{

    int *ptr = new int;

    *ptr = 500;

    cout << *ptr;

    delete ptr;
}