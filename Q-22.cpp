#include <iostream>
using namespace std;
int main()
{
    long long binary;
    cout << "Enter binary number: ";
    cin >> binary;
    int decimal = 0, base = 1;
    while(binary > 0)
    {
        int lastDigit = binary % 10;
        decimal = decimal + lastDigit * base;
        base = base * 2;
        binary = binary / 10;
    }
    cout << "Decimal = " << decimal;
    return 0;
}