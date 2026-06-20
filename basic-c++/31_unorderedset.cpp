#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s = {10,20,30,40};

    if(s.find(20) != s.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
}