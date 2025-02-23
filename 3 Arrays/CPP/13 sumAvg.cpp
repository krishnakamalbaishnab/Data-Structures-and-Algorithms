#include <iostream>
using namespace std;

float findAvg(int arr[], int size) {
    int sum_ofArray = 0;

    for (int i = 0; i < size; i++) {
        sum_ofArray += arr[i];
    }

    float avg = static_cast<float>(sum_ofArray) / size;
    return avg;
}

int main() {
    int array1[] = {1, 2, 3, 5, 7, 4, 6};
    int size = sizeof(array1) / sizeof(array1[0]);

    float average = findAvg(array1, size);
    cout << "Average: " << average << endl;

    return 0;
}
