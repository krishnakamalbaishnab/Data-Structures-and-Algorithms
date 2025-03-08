#include<iostream>
#include<string>

using namespace std;

string compare_string(const string& str1, const string& str2) {
    if (str1 == str2) {
        return "Strings are equal";
    } else {
        return "Strings are not equal";
    }
}

int main() {
    cout << compare_string("krishna", "baishnab") << endl;  // not equal
    cout << compare_string("KRISHNA", "krishna") << endl;   // not equal
    cout << compare_string("krishna", "krishna") << endl;   // equal
    
    return 0;
}