#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Fixed array size
    int arr[SIZE] = {1, 2, 3, 5, 6, 7}; // Only 6 elements initialized
    int current_size = 6; // Number of actual elements

    // Append an element (add at the next available index)
    int append_element = 8;
    if (current_size < SIZE) {
        arr[current_size] = append_element;
        current_size++;
    }

    cout << "After appending: ";
    for (int i = 0; i < current_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert an element at index 3 (shifting required)
    int insert_index = 3;
    int insert_element = 4;

    if (current_size < SIZE) {
        // Shift elements to the right
        for (int i = current_size; i > insert_index; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element
        arr[insert_index] = insert_element;
        current_size++;
    }

    cout << "After inserting " << insert_element << " at index " << insert_index << ": ";
    for (int i = 0; i < current_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
