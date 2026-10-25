#include <iostream>
#define SQUARE(x) ((x)*(x))
#define CUBE(x) ((x)*(x)*(x))

int main() {
    int n = 3;
    int sq = SQUARE(n);
    int cb = CUBE(n);
    std::cout << (sq > cb ? "Square is larger\n" : "Cube is larger\n");
    return 0;
}
