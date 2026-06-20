#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void loading()
{
    for(int i=1;i<=5;i++)
    {
        cout<<"Loading "<<i*20<<"%\n";

        this_thread::sleep_for(
            chrono::seconds(1)
        );
    }
}

int main()
{
    thread t(loading);

    cout<<"Program Started\n";

    t.join();

    cout<<"Completed";

    return 0;
}