#include <iostream>
#include <vector>
using namespace std;
//basic vector example
int main(){

    vector<int> num ={5 , 4 , 6};

    for(int i : num){
        cout<<i<<" ";
    }

    return 0;
}