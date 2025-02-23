#include <iostream>
using namespace std;

void deleteElement(int arr[], int &n, int index) {
    // Check if index is valid
    if (index < 0 || index >= n) {
        cout << "Invalid index!" << endl;
        return;
    }

    // Shift elements to the left
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce array size by 1
    n--;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);  // Get array size

    int index_to_delete = 3;  // Delete element at index 3 (value 4)

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    deleteElement(arr, n, index_to_delete);

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
