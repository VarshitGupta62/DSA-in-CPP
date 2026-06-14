#include<iostream>
#include<vector>

using namespace std;

class  BankAccount{
    public:
    string name;
    string accountNumber;
    double balance;

    void addAccount(string n , string an , double b){
        name = n;
        accountNumber = an;
        balance = b;
    }

    void display(){
        cout<<"Account Holder Name is : "<<name<<endl;
        cout<<"Account Number is : "<<accountNumber<<endl;
        cout<<"Total Balance is : "<<balance<<endl;
    }

     // Deposit
    void deposit(double amount)
    {
        balance += amount;
    }

    // Function Overloading

    double calculateInterest()
    {
        return balance * 0.05;
    }


    double calculateInterest(double rate)
    {
        return balance * rate / 100;
    }


};

int main(){

    vector<BankAccount> accounts;

    BankAccount A1;

    A1.addAccount("Varshit Gupta", "E213012" , 12000);

    A1.deposit(50000);

    double intrest = A1.calculateInterest(10);

    A1.deposit(intrest);

    BankAccount A2;

    A2.addAccount("Harshit Gupta", "E213013" , 56000);

    accounts.push_back(A1);
    accounts.push_back(A2);

    for(auto element:accounts){
        element.display();
    }

    

}