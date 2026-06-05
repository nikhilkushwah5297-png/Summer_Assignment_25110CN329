#include <iostream>
using namespace std;
int main()
{
    long long n;
    long long largest = 0;
    cout << "Enter a number: ";
    cin >> n;
    for(long long i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            largest = i;
            n = n / i;
        }
    }
    cout << "Largest Prime Factor = " << largest;
    return 0;
}