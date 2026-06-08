#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> marks;

    marks["Ram"] = 90;
    marks["Shyam"] = 85;
    marks["Mohan"] = 95;

    for (auto p : marks) {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}