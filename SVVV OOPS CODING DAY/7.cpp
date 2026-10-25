#include <iostream>
float totalCost(float price, int qty, float discount = 0.10f) {
    return price * qty * (1 - discount);
}
int main() {
    std::cout << "Total: " << totalCost(100, 2) << "\n";
    std::cout << "With custom discount: " << totalCost(100, 2, 0.2f) << "\n";
    return 0;
}
