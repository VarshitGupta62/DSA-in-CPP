// Find largest element in vector.
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

    int max = v[0];

    for(int element : v){
        if(max < element){
            max = element;
        }
    }

    cout<<"Max number is : "<<max;
    return 0;
}