#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // Element found
        }
    }

    return -1; // Element not found
}

int main()
{
    int arr[] = {12, 45, 7, 23, 56, 89, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 23;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}