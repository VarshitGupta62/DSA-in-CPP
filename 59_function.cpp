#include<iostream>
#include<vector>

using namespace std;


class BankAccount
{

public:

    string name;
    string accountNumber;
    double balance;


    void createAccount(string n, string an, double b)
    {
        name = n;
        accountNumber = an;
        balance = b;
    }



    void deposit(double amount)
    {
        balance += amount;
    }



    double calculateInterest()
    {
        return balance * 0.05;
    }



    double calculateInterest(double rate)
    {
        return balance * rate / 100;
    }



    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account No: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;

        cout<<"------------------"<<endl;
    }


};



int main()
{

    vector<BankAccount> accounts;


    BankAccount A1;


    A1.createAccount(
        "Varshit Gupta",
        "E213012",
        12000
    );


    A1.deposit(50000);


    double interest = A1.calculateInterest(10);


    A1.deposit(interest);



    BankAccount A2;


    A2.createAccount(
        "Harshit Gupta",
        "E213013",
        56000
    );



    accounts.push_back(A1);

    accounts.push_back(A2);



    for(auto element : accounts)
    {
        element.display();
    }


    return 0;

}