#include<iostream>
#include<type_traits>

using namespace std;


template<typename T>
typename enable_if<is_integral<T>::value>::type
show(T x)
{
    cout<<"Integer: "<<x;
}


int main()
{
    show(10);
}