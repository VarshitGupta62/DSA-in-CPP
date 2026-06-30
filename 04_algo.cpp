#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // choose last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        // cout << "Array after partition: ";

        // for (int l = 0; l < 5; l++)
        // {
        //     cout << arr[l] << " ";
        // }

        quickSort(arr, low, pivotIndex - 1);

        // cout << "Array left: ";

        // for (int l = 0; l < 5; l++)
        // {
        //     cout << arr[l] << " ";
        // }
        quickSort(arr, pivotIndex + 1, high);

        // cout << "Array left: ";

        // for (int l = 0; l < 5; l++)
        // {
        //     cout << arr[l] << " ";
        // }
    }
}

int main()
{
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}