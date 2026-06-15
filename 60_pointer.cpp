#include <iostream>
using namespace std;

// pass by reference

void swap(int &a ,int &b){

    int temp;

    temp = a;
    a = b;
    b = temp;

}

int main() {
    int x = 10;
    int y = 20;

    cout <<"Value print before swap : "<< x<<"  :  "<<y << endl;
    swap(x , y);
    cout <<"Value print after swap : "<< x<<"  :  "<<y << endl;

}