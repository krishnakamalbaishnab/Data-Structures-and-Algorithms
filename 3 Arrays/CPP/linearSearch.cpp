

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9, 10};  // Array to search in
    int n = sizeof(arr) / sizeof(arr[0]);    // Length of array
    int key = 5;  // Element to search for

    int i = 0;  // Start index

    while (i < n) {
        if (arr[i] == key) {
            cout << "The element found at index: " << i << endl;
            return 0;  // Exit when the element is found
        }
        i++;
    }

    cout << "Element not found!" << endl;  // If element is not found
    return 0;
}
