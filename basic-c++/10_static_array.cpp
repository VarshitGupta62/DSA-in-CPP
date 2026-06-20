#include <iostream>
// sum of array 
using namespace std;

int main(){

    int arr[4] = {0 , 1 , 2 , 3};

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        /* code */
        sum = sum + arr[i];
    }

    cout<<"Sum of array : "<<sum;
    
    
}