#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{

    vector<int> v = {10,20,30,20,40};


    v.erase(
        remove(v.begin(), v.end(), 20),
        v.end()
    );


    for(int x:v)
        cout<<x<<" ";

}