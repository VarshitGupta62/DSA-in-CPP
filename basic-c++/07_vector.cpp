// Count even and odd numbers.
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Size of vector : ";
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        
        int x;
        cout<<"Enter the number "<<i + 1<<" : ";
        cin>>x;
        v.push_back(x);

    }

    int even = 0;
    int odd = 0;

    for(int element : v){
        if(element%2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    cout<<"Total Even Number : "<<even<<" Total Odd Number : "<<odd;
    return 0;
}