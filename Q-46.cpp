#include <iostream>
using namespace std;
bool armstrong(int n)
{
    int sum = 0, temp = n, digit;
    while(temp > 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp = temp / 10;
    }
    return sum == n;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(armstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
    return 0;
}