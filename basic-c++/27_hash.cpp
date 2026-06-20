#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 1, 2};

    int hash[100] = {0}; // Hash Table

    for(int i = 0; i < 6; i++)
    {
        hash[arr[i]]++;
    }

    cout << "1 -> " << hash[1] << endl;
    cout << "2 -> " << hash[2] << endl;
    cout << "3 -> " << hash[3] << endl;

    return 0;
}