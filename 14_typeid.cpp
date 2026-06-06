#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int x = 10;
    double y = 5.5;
    string name = "Varshit";

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(name).name() << endl;

    return 0;
}