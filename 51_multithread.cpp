#include <iostream>
#include <thread>
#include <vector>
#include <queue>
#include <mutex>

using namespace std;

// Thread Pool
queue<int> tasks;

mutex m;


// Worker function
void worker(int id)
{

    while(true)
    {

        int task;


        {
            lock_guard<mutex> lock(m);


            if(tasks.empty())
                return;


            task = tasks.front();

            tasks.pop();

        }


        cout<<"Thread "
            <<id
            <<" processing task "
            <<task
            <<endl;


    }

}



int main()
{

    // Add tasks

    for(int i=1;i<=10;i++)
    {
        tasks.push(i);
    }



    vector<thread> pool;


    // Create 3 threads

    for(int i=1;i<=3;i++)
    {
        pool.push_back(
            thread(worker,i)
        );
    }



    // wait for threads

    for(auto &t:pool)
    {
        t.join();
    }


    return 0;
}