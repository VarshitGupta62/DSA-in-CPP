// Reverse a vector.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Size of vector : ";
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {

        int x;
        cout << "Enter the number " << i + 1 << " : ";
        cin >> x;
        v.push_back(x);
    }

    vector<int> rev;

    for (int i = v.size() - 1; i >= 0; i--)
    {

        rev.push_back(v[i]);
    }

    for (int element : rev)
    {

        cout << element << " ";
    }

    return 0;
}