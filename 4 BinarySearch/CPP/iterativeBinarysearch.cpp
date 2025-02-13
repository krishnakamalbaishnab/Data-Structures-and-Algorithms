#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1;
}

int main() {
    int arr[] = {4, 8, 10, 15, 18, 21, 27, 29, 33, 34, 39, 40, 43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18;

    int result = binarySearchIterative(arr, size, key);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
