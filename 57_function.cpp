#include <iostream>
using namespace std;

// Static Polymorphism

class Calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{

    Calculator c;

    cout << c.add(10, 20) << endl;

    cout << c.add(2.5, 3.5);
}