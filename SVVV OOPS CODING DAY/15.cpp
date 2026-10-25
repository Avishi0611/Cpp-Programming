#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    float salary;

public:
    // Constructor
    Employee(string n, float s) {
        name = n;
        salary = s;
    }

    // Method to increase salary, returns *this for chaining
    Employee* increaseSalary(float percent) {
        salary += (percent / 100.0f) * salary;
        return this; // return pointer to current object
    }

    // Display method
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Create Employee object using pointer
    Employee* emp = new Employee("Alice", 5000);

    cout << "Before Salary Increase:\n";
    emp->display();

    // Increase salary using method chaining with this pointer
    cout << "\nAfter 10% Salary Increase:\n";
    emp->increaseSalary(10)->display();

    delete emp; // Free memory
    return 0;
}
