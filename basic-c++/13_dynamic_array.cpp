#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    // Dynamic array allocation
    int* arr = new int[size];

    // Input elements
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Display elements
    cout << "Array elements are:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    return 0;
}

// Modern C++ (Recommended)

// Instead of new and delete, use vector: