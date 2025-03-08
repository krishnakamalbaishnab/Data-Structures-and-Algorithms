#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {  // If mismatch, not a palindrome
            return false;
        }
        left += 1;
        right -= 1;  // Move pointers inward
    }
    return true;  // If loop completes, it's a palindrome
}

int main() {
    cout << boolalpha;  // This makes bool values print as "true"/"false" instead of 1/0
    cout << is_palindrome("racecar") << endl;  // Output: true
    cout << is_palindrome("python") << endl;   // Output: false
    
    return 0;
}