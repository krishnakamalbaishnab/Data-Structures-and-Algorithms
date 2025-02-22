#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    int min_value = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }

    return min_value;
}

int main() {
    int array1[] = {1, 2, 6, 4, 7, 9, 10};
    int size = sizeof(array1) / sizeof(array1[0]);

    int min_value = findMin(array1, size);
    cout << "Minimum value: " << min_value << endl;

    return 0;
}
