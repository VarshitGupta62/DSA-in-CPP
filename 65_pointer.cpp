#include <iostream>
#include <memory>

using namespace std;

// weak_ptr

// Does not own memory.
int main()
{

    shared_ptr<int> p =
        make_shared<int>(10);

    weak_ptr<int> w = p;

    cout << p.use_count();
}