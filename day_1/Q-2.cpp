#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;

    cout << "Enter number: ";
    cin >> n;

    for(int count = 1; count <= n; count++)
    {
        fact *= count;
    }

    cout << "Factorial = " << fact;

    return 0;
}
