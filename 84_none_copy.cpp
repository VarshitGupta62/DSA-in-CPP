#include<iostream>
using namespace std;


class Database
{

public:

    Database()
    {
        cout<<"Database Created\n";
    }


    // Disable copy constructor
    Database(const Database&) = delete;


    // Disable copy assignment
    Database& operator=(const Database&) = delete;

};


int main()
{

    Database db1;


    // Database db2 = db1;  // ERROR


    // db2 = db1;           // ERROR

}