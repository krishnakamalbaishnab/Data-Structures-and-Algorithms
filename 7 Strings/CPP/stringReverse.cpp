#include <iostream>
using namespace std;

int main() {
    string s = "krishna";
    int length = s.length();  // Get length of string

    // Loop from last index (length-1) to 0
    for (int i = length - 1; i >= 0; i--) {
        cout << s[i];  // Print characters in reverse order
    }
    cout << endl;
    return 0;
}
