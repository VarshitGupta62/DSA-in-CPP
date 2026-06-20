#include<iostream>
#include<type_traits>

using namespace std;

int main()
{
    cout << is_integral<int>::value << endl;
    cout << is_integral<float>::value << endl;
}