#include <iostream>

using namespace std;

template <typename X , typename Y>

X big(X a, Y b)
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

    cout<<big(45 , 75.33)<<endl;
    cout<<big(45.12 , 12);
    
}