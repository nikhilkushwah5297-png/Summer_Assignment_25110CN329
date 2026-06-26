#include<iostream>
using namespace std;
int main()
{
    int num = 7, guess;
    cout<<"Guess a number (1-10): ";
    cin>>guess;
    if(guess == num)
        cout<<"Correct Guess!";
    else
        cout<<"Wrong Guess";
    return 0;
}
