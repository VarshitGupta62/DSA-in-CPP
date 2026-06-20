#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    int n , x ;

    cout<<"Enter the arr size :";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i + 1<<" value : ";
        cin>>x;
        v.push_back(x);
    }

    for(auto it=v.begin(); it<v.end(); it++){
        cout<<"arr value is : "<<*it<<endl;
    }
}