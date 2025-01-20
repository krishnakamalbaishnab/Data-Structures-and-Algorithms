#include<iostream>
using namespace std;

int main() {
    int n;

    // Input the number of rows (n)
    cout << "Enter the number of rows: ";
    cin >> n;

    // Loop to print the pattern
    for (int i = 1; i <= n; i++) {
        // Print '*' for each column in the current row
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
