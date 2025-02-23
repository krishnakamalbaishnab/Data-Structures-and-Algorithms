#include <iostream>
using namespace std;

int globalVar = 0; // Global variable

int function(int n) {
    if (n > 0) {
        globalVar++;
        return function(n - 1) + globalVar;
    }
    return 0;
}

int main() {
    cout << function(5) << endl;
    return 0;
}
