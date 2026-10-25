#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    void draw() override {
        cout << "Drawing a circle with radius: " << radius << endl;
    }
};
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() override {
        cout << "Drawing a rectangle with width: " << width << " and height: " << height << endl;
    }
};

int main() {
    Circle myCircle(5);
    Rectangle myRectangle(10, 5);
    myCircle.draw();
    myRectangle.draw();

    return 0;
}
