#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

// Function to demonstrate how count() works
void explainCount()
{
    // Declare and initialize an array
    int arr[5] = {3, 4, 5, 7, 7};

    // Number to be counted in the array
    int num = 7;

    // count(start_pointer, end_pointer, value_to_count)
    // It returns how many times 'num' occurs between arr[0] and arr[4]
    // In this case, 7 appears twice

    // cout (console output) prints the result to standard output
    // Here, it'll print "2" because 7 occurs two times in arr
    cout << count(arr, arr + 5, num);
}

int main()
{
    explainCount(); // Call the function

    return 0; // Exit the program
}
