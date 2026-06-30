#include<iostream>
using namespace std;
int main()
{
    string name[3];
    int marks[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Name: ";
        cin>>name[i];
        cout<<"Enter Marks: ";
        cin>>marks[i];
    }
    cout<<"\nStudent Records\n";
    for(int i=0;i<3;i++)
    {
        cout<<name[i]<<" "<<marks[i]<<endl;
    }
    return 0;
}
