#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

class Box {
private:
    double volume;
public:
    Box(double v) : volume(v) {}

    bool operator>(const Box& other) const {
        return volume > other.volume;
    }

    friend ostream& operator<<(ostream& os, const Box& b) {
        os << "Box(volume=" << b.volume << ")";
        return os;
    }
};

int main() {
    int a = 5, b = 9;
    cout << "Max of " << a << " and " << b << " is: " << findMax(a, b) << endl;

    double x = 12.3, y = 4.5;
    cout << "Max of " << x << " and " << y << " is: " << findMax(x, y) << endl;

    string s1 = "Apple", s2 = "Banana";
    cout << "Max of \"" << s1 << "\" and \"" << s2 << "\" is: " << findMax(s1, s2) << endl;

    Box box1(10.5), box2(8.2);
    cout << "Max of " << box1 << " and " << box2 << " is: " << findMax(box1, box2) << endl;

    return 0;
}
