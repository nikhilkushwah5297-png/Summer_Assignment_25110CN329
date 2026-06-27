#include<iostream>
using namespace std;
int main()
{
    string name;
    int basic, bonus, total;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Basic Salary: ";
    cin>>basic;
    cout<<"Enter Bonus: ";
    cin>>bonus;
    total = basic + bonus;
    cout<<"Total Salary = "<<total;
    return 0;
}