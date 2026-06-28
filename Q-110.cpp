#include<iostream>
using namespace std;
int main()
{
    string name;
    int acc;
    float balance;
    cout<<"Enter Account Number: ";
    cin>>acc;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Balance: ";
    cin>>balance;
    cout<<"\nAccount Details\n";
    cout<<"Account No: "<<acc<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance;
    return 0;
}