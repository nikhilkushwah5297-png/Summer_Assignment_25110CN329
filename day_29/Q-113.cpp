#include<iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cin>>ch;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(ch==1)
        cout<<"Answer = "<<a+b;
    else if(ch==2)
        cout<<"Answer = "<<a-b;
    else if(ch==3)
        cout<<"Answer = "<<a*b;
    else if(ch==4)
        cout<<"Answer = "<<a/b;
    else
        cout<<"Invalid Choice";
    return 0;
}
