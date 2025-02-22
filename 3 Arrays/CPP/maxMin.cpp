#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max_value = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    return max_value;
}

int main() {
    int array1[] = {1, 2, 6, 4, 7, 9, 10};
    int size = sizeof(array1) / sizeof(array1[0]);

    int max_value = findMax(array1, size);
    cout << "Maximum value: " << max_value << endl;

    return 0;
}


