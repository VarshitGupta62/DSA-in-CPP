#include <iostream>
#include <map>
using namespace std;

int main()
{

    int n, marks;
    string name;
    cout << "Enter the student data size : ";
    cin >> n;
    map<string, int> studentData;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Student Name : ";
        cin >> name;
        cout << "Enter the Student Full Marks : ";
        cin >> marks;

        studentData.insert({name, marks});
    }

    for (auto element : studentData)
    {
        cout << "Stdent name is " << element.first << " Student Marks is : " << element.second << endl;
    }

    string searchName;
    cout << "Enter name to serach : ";
    cin >> searchName;

    auto find = studentData.find(searchName);

    if (find != studentData.end())
    {
        cout << "Student Found = "<< find->first << endl;
        cout << "Found! Marks = " << find->second << endl;
    }
    else
    {
        cout << "Student not found\n";
    }

    return 0;
}