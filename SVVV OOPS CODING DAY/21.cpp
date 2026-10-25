#include <iostream>
using namespace std;

void printPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        } 
        else {
            for (int j = i; j >= 1; j--) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
int main() {
    int rows = 5; 
    printPattern(rows);
    return 0;
}
