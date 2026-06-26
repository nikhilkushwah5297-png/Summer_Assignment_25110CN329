#include<iostream>
using namespace std;
int main()
{
    int pin = 1234, p, balance = 5000, amount;
    cout<<"Enter PIN: ";
    cin>>p;
    if(p == pin)
    {
        cout<<"Enter Amount: ";
        cin>>amount;
        if(amount <= balance)
        {
            balance = balance - amount;
            cout<<"Amount Withdrawn\n";
            cout<<"Balance = "<<balance;
        }
        else
            cout<<"Insufficient Balance";
    }
    else
        cout<<"Wrong PIN";
    return 0;
}