#include <iostream>

using namespace std;

template <typename T>

T big(T a, T b)
{

    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(){
    cout<<big(45 , 75)<<endl;
    cout<<big(45.12 , 12.22);
}