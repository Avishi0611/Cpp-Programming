#include <iostream>
using namespace std;
namespace Calculator {
    namespace Basic {
        int add(int a, int b) {
            return a + b;
        }
        int subtract(int a, int b) {
            return a - b;
        }
        int multiply(int a, int b) {
            return a * b;
        }
        double divide(double a, double b) {
            if (b == 0) {
                std::cout << "Error: Division by zero!" <<endl;
                return 0; 
            }
            return a / b;
        }  }  }
int main() {
    int num1 = 10, num2 = 5;
    cout<< "Add: " << Calculator::Basic::add(num1, num2) << std::endl;
    cout << "Subtract: " << Calculator::Basic::subtract(num1, num2) <<endl;
    cout << "Multiply: " << Calculator::Basic::multiply(num1, num2) << endl;
    cout << "Divide: " << Calculator::Basic::divide(num1, num2) << endl;
    cout << "Divide by zero: " << Calculator::Basic::divide(num1, 0) << endl;
    return 0;
}
