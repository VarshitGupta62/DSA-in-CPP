#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq; //In C++, priority_queue implements a max heap.

    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(30);

    cout << pq.top() << endl;

    return 0;
}