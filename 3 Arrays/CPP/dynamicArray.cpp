#include <iostream>
using namespace std;

class Array {
private:
    int* A;
    int size;
    int length;

public:
    Array(int size) {
        this->size = size;
        length = 0; // Initialize length to zero
        A = new int[size];
    }

    void create() {
        cout << "Enter number of elements: ";
        cin >> length;
        if (length > size) {
            cout << "Error: Length cannot exceed size!" << endl;
            return;
        }
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++) {
            cout << "Array element [" << i << "] = ";
            cin >> A[i];
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    ~Array() {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main() {
    Array arr(10);
    arr.create();
    arr.display();
    return 0;
}
