#include <iostream>
using namespace std;

int computeSeriesSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
        else {
            sum -= i;
        }
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the number of terms (n): ";
    cin >> n;
    int result = computeSeriesSum(n);
    cout << "The sum of the series up to " << n << " terms is: " << result << endl;
    return 0;
}
