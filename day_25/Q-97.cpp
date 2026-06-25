#include<iostream>
using namespace std;
int main()
{
    int a[10], b[10], c[20];
    int n1, n2;
    cin >> n1;
    for(int i=0; i<n1; i++)
        cin >> a[i];
    cin >> n2;
    for(int i=0; i<n2; i++)
        cin >> b[i];
    for(int i=0; i<n1; i++)
        c[i] = a[i];
    for(int i=0; i<n2; i++)
        c[n1+i] = b[i];
    cout << "Merged Array: ";
    for(int i=0; i<n1+n2; i++)
        cout << c[i] << " ";
    return 0;
}
