#include <iostream>
using namespace std;

int main() {
    pair<int, string> p;

    p = make_pair(101, "Laptop");

    cout << p.first << endl;
    cout << p.second << endl;

    return 0;
}