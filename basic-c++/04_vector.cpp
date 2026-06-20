#include <iostream>
#include <vector>
using namespace std;
// dynamic vector
int main(){

    int n;

    cout<<"Enter the size of vector : "<<endl;
    cin>>n;

    vector<int> v;
    
    for(int i = 0; i < n; i++){
        int x;
        cout<<"Enter the num "<<i + 1<<" : ";
        cin>>x;

        v.push_back(x);
    }

    for(int num : v){
        cout<<num<<" ";
    }




    return 0;
}