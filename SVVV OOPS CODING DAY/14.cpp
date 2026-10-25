#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        // Swap values using pointer dereferencing
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void displayArray(int* arr, int size) {
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size. Must be positive.\n";
        return 1;
    }

    int* arr = new int[size];

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    cout << "Original array: ";
    displayArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed array: ";
    displayArray(arr, size);

    delete[] arr; // Free dynamically allocated memory
    return 0;
}
