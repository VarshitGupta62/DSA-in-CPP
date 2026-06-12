#include<iostream>
#include<thread>

using namespace std;

void task1(){
    for(int i = 0; i < 5; i++){
        cout<<"This is task1 : "<<i<<endl;
    }
}
void task2(){
    for(int i = 0; i < 5; i++){
        cout<<"This is task2 : "<<i<<endl;
    }
}

int main(){

    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();

    cout<<"this is main thread";

    return 0;

}