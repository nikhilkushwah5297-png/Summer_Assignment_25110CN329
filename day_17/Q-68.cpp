#include <iostream>
using namespace std;
int main() {
    int a[] = {10, 20, 30, 40};
    int b[] = {30, 40, 50, 60};
    cout << "Common Elements: ";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}
