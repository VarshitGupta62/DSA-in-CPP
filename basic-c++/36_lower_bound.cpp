#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// basic vector example
// Returns the first position where value >= target
int main()
{

    vector<int> arr = {1, 2, 4, 4, 4, 6, 8};

    auto it = lower_bound(arr.begin(), arr.end(), 2);

   
    cout << it - arr.begin();

    return 0;
}

// #include <iostream>
// using namespace std;

// int lowerBound(int arr[], int n, int target)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>=target)
//         {
//             return i;
//         }
//     }

//     return n;
// }

// int main()
// {
//     int arr[]={10,20,20,30,40};

//     int n=5;

//     cout<<lowerBound(arr,n,20);
// }