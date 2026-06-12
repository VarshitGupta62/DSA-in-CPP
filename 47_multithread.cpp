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

    thread t1(task1); //Create thread
    thread t2(task2); //Create thread

    t1.join(); //Wait
    t2.join(); //Wait

    cout<<"this is main thread";

    return 0;

}