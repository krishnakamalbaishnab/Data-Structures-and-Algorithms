


#include <iostream>
using namespace std;

bool isValidString(string s) {
    for (char ch : s) {
        int ascii_val = (int)ch;
        if (!((ascii_val >= 65 && ascii_val <= 90) ||   // A-Z
              (ascii_val >= 97 && ascii_val <= 122) ||  // a-z
              (ascii_val >= 48 && ascii_val <= 57))) {  // 0-9
            return false;
        }
    }
    return true;
}

int main() {
    cout << isValidString("Hello123") << endl;  // 1 (True)
    cout << isValidString("Hello@123") << endl; // 0 (False)
}
