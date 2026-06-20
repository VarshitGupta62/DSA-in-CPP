#include <iostream>
using namespace std;

int main(){
    int arrs[5] = { 1 , 2 , 3 , 4 , 6};

    for(int arr : arrs){
        cout<<arr<<" ";
    }
    cout<<endl;

    return 0;
}