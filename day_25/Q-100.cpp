#include<iostream>
using namespace std;
int main()
{
    string a,b,c,temp;
    cin>>a>>b>>c;
    if(a.length()>b.length())
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b.length()>c.length())
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(a.length()>b.length())
    {
        temp=a;
        a=b;
        b=temp;
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
