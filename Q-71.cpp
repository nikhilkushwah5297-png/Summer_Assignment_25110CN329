#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int start = 0, end = 4;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == key) {
            cout << "Element Found";
            return 0;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << "Element Not Found";
    return 0;
}