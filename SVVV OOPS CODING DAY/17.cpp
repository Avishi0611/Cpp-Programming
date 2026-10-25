#include <iostream>
#include <stdexcept>
#include <sstream>
using namespace std;

class DivisionByZeroException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero is not allowed.";
    }
};


class InvalidInputException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Invalid input. Please enter numeric values.";
    }
};

float toFloat(const string& input) {
    stringstream ss(input);
    float num;
    if (!(ss >> num) || !ss.eof()) {
        throw InvalidInputException();
    }
    return num;
}

int main() {
    string input1, input2;
    float num1, num2;

    cout << "Enter two numbers to divide:\n";

    try {
        cout << "Numerator: ";
        cin >> input1;
        num1 = toFloat(input1);

        cout << "Denominator: ";
        cin >> input2;
        num2 = toFloat(input2);

        if (num2 == 0)
            throw DivisionByZeroException();

        float result = num1 / num2;
        cout << "Result: " << result << endl;

    } catch (const DivisionByZeroException& e) {
        cout << e.what() << endl;
    } catch (const InvalidInputException& e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "An unexpected error occurred." << endl;
    }

    return 0;
}
