#include <iostream>
using namespace std;
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int c[10];
    for (int i = 0; i < 5; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < 5; i++) {
        c[i + 5] = b[i];
    }
    cout << "Merged Array: ";
    for (int i = 0; i < 10; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
