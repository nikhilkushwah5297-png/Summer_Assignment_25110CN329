#include <iostream>
using namespace std;
int main() {
    int a[2][2] = {{8, 7}, {6, 5}};
    int b[2][2] = {{4, 3}, {2, 1}};
    int sub[2][2];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    cout << "Subtraction Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}