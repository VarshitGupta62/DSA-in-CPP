#include<iostream>
#include<memory>

using namespace std;

// shared_ptr

// Multiple owners.
int main()
{

shared_ptr<int> ptr = make_shared<int>(100);

shared_ptr<int> ptr2 = ptr;


cout<<*ptr;

cout<<endl<<*ptr2;


}