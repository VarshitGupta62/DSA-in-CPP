#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Input the number of pairs: ";
    cin >> n;

    vector<pair<int, string>> students;

    for (int i = 0; i < n; i++)
    {
        pair<int, string> p;

        cout << "Enter Roll Number and Name for pair "
             << i + 1 << ": ";

        cin >> p.first >> p.second;

        students.push_back(p);
    }

    cout << "\nStudent Details:\n";

    for (auto element : students)
    {
        cout << "Roll Number: "
             << element.first
             << " Name: "
             << element.second
             << "\n";
    }

    return 0;
}