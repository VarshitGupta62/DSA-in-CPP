#include <iostream>
// largest element in array 
using namespace std;

int main(){

    int arr[4] = {0 , 11 , 2 , 3};

     int max =  arr[0];

    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(arr[i] > max){
            max = arr[i];
        }

    }

    cout<<"Largest element in array  : "<<max;
    
    
}