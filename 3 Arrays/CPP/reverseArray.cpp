#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    // Step 1: Create an auxiliary array B of the same length as A
    int b[size];

    // Step 2: Copy elements of A to B in reverse order
    for (int i = 0; i < size; i++) {
        b[i] = arr[size - 1 - i];
    }

    // Step 3: Copy elements from B back to A
    for (int i = 0; i < size; i++) {
        arr[i] = b[i];
    }
}

int main() {
    // Original array A
    int array1[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(array1) / sizeof(array1[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    reverseArray(array1, size);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    return 0;
}
