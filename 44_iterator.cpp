#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10,20,30,40};

     vector<int>::reverse_iterator it;
     
    for(it = arr.rbegin(); it != arr.rend(); it++)
    {
        cout << *it << " ";
    }
}