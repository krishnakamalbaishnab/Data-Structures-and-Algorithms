#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and display array elements using a loop
    cout << "Array elements are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Modify an array element
    numbers[2] = 99;
    cout << "After modification, element at index 2: " << numbers[2] << endl;

    return 0;
}
