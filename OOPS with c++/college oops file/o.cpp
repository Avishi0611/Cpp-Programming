//Program: Arithmetic Operations using Inheritance

#include <iostream>
using namespace std;
class Addition {
protected:
    int a, b;
public:
    Addition(int x, int y) : a(x), b(y) {}
     int add() {
        return a + b;
    }
};
class Subtraction : public Addition {
public:
    Subtraction(int x, int y) : Addition(x, y) {}
     int subtract() {
        return a - b;
    }
};
class Multiplication : public Addition {
public:
    Multiplication(int x, int y) : Addition(x, y) {}
     int multiply() {
        return a * b;
    }
};
int main() {
    int a = 10, b = 5;
Addition addition(a,b);
Subtraction subtraction(a,b);
Multiplication multiplication(a,b);
   cout << "Addition: " << addition.add() << endl;
    cout << "Subtraction: " << subtraction.subtract() << endl;
    cout << "Multiplication: " << multiplication.multiply() << endl;
   return 0;
}