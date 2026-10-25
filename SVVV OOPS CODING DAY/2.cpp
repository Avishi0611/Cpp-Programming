#include <iostream>
enum TrafficLight { Red, Yellow, Green };

int main() {
    for (int i = 0; i < 3; ++i) {
        for (int light = Red; light <= Green; ++light) {
            switch (light) {
                case Red: std::cout << "Stop\n"; break;
                case Yellow: std::cout << "Get Ready\n"; break;
                case Green: std::cout << "Go\n"; break;
            }
        }
    }
    return 0;
}
