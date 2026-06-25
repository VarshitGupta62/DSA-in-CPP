#include<iostream>
#include<vector>
using namespace std;


void merge(int arr[], int left, int mid, int right)
{

    vector<int> temp;


    int i = left;      // left array pointer
    int j = mid + 1;   // right array pointer


    // compare both parts
    while(i <= mid && j <= right)
    {

        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }

        else
        {
            temp.push_back(arr[j]);
            j++;
        }

    }


    // remaining left elements
    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }


    // remaining right elements
    while(j <= right)
    {
        temp.push_back(arr[j]);
        j++;
    }


    // copy sorted data back
    for(int k=left;k<=right;k++)
    {
        arr[k] = temp[k-left];
    }

}



void mergeSort(int arr[], int left, int right)
{

    // only one element
    if(left >= right)
        return;


    int mid = (left + right) / 2;


    // divide
    mergeSort(arr,left,mid);

    mergeSort(arr,mid+1,right);


    // combine
    merge(arr,left,mid,right);

}



int main()
{

    int arr[] = {5,2,8,1,3};

    int n = 5;


    mergeSort(arr,0,n-1);


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}