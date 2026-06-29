#include<iostream>
using namespace std;
int main()
{
    string s;
    int ch;
    cout<<"1.Length\n2.Display\n";
    cin>>ch;
    cout<<"Enter String: ";
    cin>>s;
    if(ch==1)
        cout<<"Length = "<<s.length();
    else if(ch==2)
        cout<<s;
    else
        cout<<"Invalid Choice";
    return 0;
}
