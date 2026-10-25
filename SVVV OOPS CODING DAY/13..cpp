#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for polymorphism
    virtual void calculateArea() {
        cout << "Calculating area of shape...\n";
    }

    virtual ~Shape() {} // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void calculateArea() override {
        float area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Shape* shapePtr;

    // Pointing to Circle
    Circle c(5.0);
    shapePtr = &c;
    shapePtr->calculateArea();  // Calls Circle::calculateArea()

    // Pointing to Rectangle
    Rectangle r(4.0, 6.0);
    shapePtr = &r;
    shapePtr->calculateArea();  // Calls Rectangle::calculateArea()

    return 0;
}
