#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int n , x , y;

    cout<<"Enter the arr size :";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i + 1<<" value : ";
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter the target value for upper bound : ";
    cin>>y;

    auto it = upper_bound(v.begin(), v.end() , y);

    cout<<"Index is : "<<it - v.begin();
}