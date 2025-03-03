#include <iostream>
using namespace std;

int main() {
    char str[] = "welcome";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {  // Stop at '\0'
        count++;
    }

    cout << "Length of the string: " << count << endl;
    return 0;
}
