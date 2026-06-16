#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int arr[n - 1];
    int total = n * (n + 1) / 2;
    int sum = 0;
    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Missing Number = " << total - sum;
    return 0;
}