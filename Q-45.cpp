#include <iostream>
using namespace std;
bool palindrome(int n)
{
    int rev = 0, temp = n;
    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    return n == rev;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(palindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}