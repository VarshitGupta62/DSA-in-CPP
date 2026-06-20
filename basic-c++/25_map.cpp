#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    int n;
    int x;
    cout<<"Enter the size of array :"; 
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i+1<<" Number ";
        cin>>x;
        v.push_back(x);
    }

    map<int ,int> fre;

    for(auto element : v){
        fre[element]++;
    }

    int max = 0; 
    int num = 0; 

    for(auto element : fre){
        cout<<"Element is "<<element.first<<" Frequency is : "<<element.second<<endl;

        if(max <= element.second){

            num = element.first;
            max = element.second;

        }
    }

    cout<<"Max Frequency is : "<<max<<endl;
    cout<<"Max Frequency Number is : "<<num;

    return 0;
}