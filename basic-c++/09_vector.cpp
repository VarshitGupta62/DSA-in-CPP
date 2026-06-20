// Check if element exists in vector.
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

    int x , found;
    cout<<"Enter element for find : ";
    cin>>x;

    for(int element : v){

        if(element == x){

            found = true;
            break;

        } 
    }

    if (found == true){

        cout<<"Element is find";

    }else{

        cout<<"Element not find";

    }
    

   
    return 0;
}