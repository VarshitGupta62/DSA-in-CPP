#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int , string>> p;

    p.push_back({56 , "Varhsit Gupta"});
    p.push_back({57, "Vishal Kumar"});

    for(auto element : p){
        cout<<"Roll Number is : "<<element.first<<" Name is : "<<element.second<<"\n";
    }
    
    return 0;
}