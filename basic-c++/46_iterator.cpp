#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    int n , x , even = 0 ,  max = 0;

    cout<<"Enter the arr size :";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i + 1<<" value : ";
        cin>>x;
        v.push_back(x);
    }

    for(auto it=v.begin(); it<v.end(); it++){
        
        if(*it%2 == 0){
            even++;
        }

        if(*it > max){
            max = *it;
        }
    }

    cout<<"All even number is : "<<even<<endl;
    cout<<"Max number is : "<<max;
}