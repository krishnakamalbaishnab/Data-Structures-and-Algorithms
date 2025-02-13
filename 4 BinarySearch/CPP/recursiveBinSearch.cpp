#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return binarySearchRecursive(arr, mid + 1, right, key);
    else
        return binarySearchRecursive(arr, left, mid - 1, key);
}

int main() {
    int arr[] = {4, 8, 10, 15, 18, 21, 27, 29, 33, 34, 39, 40, 43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18;

    int result = binarySearchRecursive(arr, 0, size - 1, key);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
