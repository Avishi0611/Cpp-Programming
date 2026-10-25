#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    void setBrand(string b) { brand = b; }
};

class Car : public Vehicle {
protected:
    string model;
public:
    void setModel(string m) { model = m; }
};

class ElectricCar : public Car {
    int battery;
public:
    void setBattery(int b) { battery = b; }
    void display() {
        cout << "Brand: " << brand << "\nModel: " << model
             << "\nBattery: " << battery << " kWh" << endl;
    }
};

int main() {
    ElectricCar ec;
    ec.setBrand("Tesla");
    ec.setModel("Model 3");
    ec.setBattery(75);
    ec.display();
    return 0;
}
