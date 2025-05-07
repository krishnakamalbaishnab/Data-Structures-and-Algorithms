#include <iostream>
using namespace std;

int main() {
    int A[100] = {1, 4, 6, 7, 9, 10}; // Preallocated size with 6 elements
    int n = 6; // Current number of elements
    int x = 2; // Element to insert

    int i = n - 1;

    // Shift elements to the right to make space
    while (i >= 0 && A[i] > x) {
        A[i + 1] = A[i];
        i--;
    }

    // Insert x at the correct position
    A[i + 1] = x;
    n++; // Increase size

    // Print updated array
    for (int j = 0; j < n; j++) {
        cout << A[j] << " ";
    }

    return 0;
}
