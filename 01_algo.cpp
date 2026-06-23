#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout<<"value is i : "<<i<<endl;

        bool s = false;


        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);

                 for(int k = 0; k < n; k++)
                    cout << arr[k] << " ";

                cout << endl;

                s = true;
            }
        }

        if(s == false){

            break;
            
        }


    }
}

int main()
{
    int arr[] = {5, 3, 8, 1, 2};

    int n = 5;
     cout<<"Before short : ";
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    cout<<endl;

    bubbleSort(arr, n);

    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    return 0;
}