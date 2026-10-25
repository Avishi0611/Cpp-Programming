#include <iostream>
namespace First {
    void process() { std::cout << "Processing in First namespace\n"; }
}
namespace Second {
    void process() { std::cout << "Processing in Second namespace\n"; }
}
int main() {
    int choice;
    std::cout << "Enter 1 or 2: ";
    std::cin >> choice;
    if (choice == 1)
        First::process();
    else
        Second::process();
    return 0;
}
