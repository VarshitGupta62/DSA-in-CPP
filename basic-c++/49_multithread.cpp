#include <iostream>
#include <thread>
#include <mutex>

using namespace std;


int balance = 0;


mutex m;


void addMoney()
{

    for(int i=0;i<100000;i++)
    {

        m.lock();


        balance++;


        m.unlock();

    }

}



int main()
{

    thread t1(addMoney);

    thread t2(addMoney);


    t1.join();

    t2.join();


    cout<<"Balance: "<<balance;


}