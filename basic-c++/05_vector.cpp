// Take n numbers in vector and print sum.

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    vector<int> v;

    cout<<"Enter the size of vector : "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){

        int x;
        cout<<"Enter numer is "<<i + 1<<" : ";
        cin>>x;
        v.push_back(x);
        

    }

    int sum = 0;

    for(int element : v){
        sum = sum + element;
    }

    cout<<"Sum is : "<<sum;

    return 0;
}