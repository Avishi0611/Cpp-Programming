#include <iostream>
using namespace std;

// Abstract base class
class Vehicle {
public:
    // Pure virtual function
    virtual void describe() = 0;

    // Virtual destructor (optional but good practice)
    virtual ~Vehicle() {}
};

// Derived class: Car
class Car : public Vehicle {
public:
    void describe() override {
        cout << "This is a Car. It has 4 wheels and is suitable for families." << endl;
    }
};

// Derived class: Bike
class Bike : public Vehicle {
public:
    void describe() override {
        cout << "This is a Bike. It has 2 wheels and is great for quick, solo travel." << endl;
    }
};

int main() {
    // Using base class pointers to demonstrate polymorphism
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();

    cout << "Vehicle Descriptions:\n";
    v1->describe();
    v2->describe();

    // Clean up
    delete v1;
    delete v2;

    return 0;
}
