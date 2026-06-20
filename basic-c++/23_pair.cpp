#include <iostream>
using namespace std;

int main() {
    pair<int, int> p1 = {1, 5};
    pair<int, int> p2 = {2, 3};

    if (p1 < p2)
        cout << "p1 is smaller";
    else
        cout << "p2 is smaller";

    return 0;
}