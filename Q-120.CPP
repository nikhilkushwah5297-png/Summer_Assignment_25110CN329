#include<iostream>
using namespace std;
void display(string name,int marks)
{
    cout<<"\nName: "<<name<<endl;
    cout<<"Marks: "<<marks;
}
int main()
{
    string name;
    int marks;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Marks: ";
    cin>>marks;
    display(name,marks);
    return 0;
}