#include<iostream>
using namespace std;
int main()
{
    string name;
    int m1,m2,m3,total;
    float per;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Marks of 3 Subjects: ";
    cin>>m1>>m2>>m3;
    total = m1 + m2 + m3;
    per = total / 3.0;
    cout<<"\nTotal = "<<total<<endl;
    cout<<"Percentage = "<<per;
    return 0;
}
