#include<iostream>
using namespace std;
int main()
{
    string item;
    int quantity;
    cout<<"Enter Item Name: ";
    cin>>item;
    cout<<"Enter Quantity: ";
    cin>>quantity;
    cout<<"\nInventory Details\n";
    cout<<"Item = "<<item<<endl;
    cout<<"Quantity = "<<quantity;
    return 0;
}