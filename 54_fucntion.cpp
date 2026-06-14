#include<iostream>

using namespace std;

int calculateSalary(int hour, int rate){

    return hour * rate;

}

int main(){

    int h , r;
    cout<<"Enter the total hour : ";
    cin>>h;

    cout<<"Enter the total rate : ";
    cin>>r;

    int totalSalary = calculateSalary(h , r);
    cout<<"Your total salary is : "<<totalSalary;
}