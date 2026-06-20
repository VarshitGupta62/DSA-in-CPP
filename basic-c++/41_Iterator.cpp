#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name="HELLO";

    for(
        auto it=name.begin();
        it!=name.end();
        it++
    )
    {
        cout<<*it<<" ";
    }
}