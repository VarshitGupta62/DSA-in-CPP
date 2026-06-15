#include<iostream>
#include<memory>

using namespace std;

// unique_ptr

// Only one owner.
int main()
{

unique_ptr<int> ptr = make_unique<int>(100);

// unique_ptr<int> ptr2 = ptr;


cout<<*ptr;


}