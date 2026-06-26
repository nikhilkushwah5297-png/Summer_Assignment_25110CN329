#include<iostream>
using namespace std;
int main()
{
    int ans, score = 0;
    cout<<"1. Capital of India?\n";
    cout<<"1. Delhi\n2. Mumbai\n3. Agra\n";
    cin>>ans;
    if(ans == 1)
        score++;
    cout<<"2. 5 + 3 = ?\n";
    cout<<"1. 6\n2. 8\n3. 9\n";
    cin>>ans;
    if(ans == 2)
        score++;
    cout<<"Your Score = "<<score;
    return 0;
}