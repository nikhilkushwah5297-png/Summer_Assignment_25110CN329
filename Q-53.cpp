#include <iostream>
using namespace std;
int main() {
    int n, key, found = 0;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            cout << "Element found at index " << i;
            break;
        }
    }
    if (found == 0)
        cout << "Element not found";
    return 0;
}