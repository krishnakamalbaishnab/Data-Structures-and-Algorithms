#include<iostream>
using namespace std;

int main(){
    int a[5] = {1, 2, 3, 4, 5}; // Static Integer Array
    cout << "Static Array: ";
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    int *b = new int[5]; // Dynamic Integer Array
    for(int i = 0; i < 5; i++){
        b[i] = i + 1; // Assigning values
    }

    cout << "Dynamic Array: ";
    for(int i = 0; i < 5; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    delete[] b; // Free allocated memory
    return 0;
}
