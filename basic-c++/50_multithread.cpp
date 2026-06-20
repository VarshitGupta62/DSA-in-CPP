#include <iostream>
#include <thread>
#include <atomic>

using namespace std;


atomic<int> count(0);


void increase()
{

    for(int i=0;i<100000;i++)
    {
        count++;

    }

}



int main()
{

    thread t1(increase);

    thread t2(increase);


    t1.join();

    t2.join();


    cout<<count;

}