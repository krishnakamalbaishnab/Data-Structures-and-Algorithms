#include <bits/stdc++.h>
using namespace std;

void explainReverse()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // Show original vector
    cout << "Original vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Reverse the entire vector
    reverse(v.begin(), v.end());

    // Show reversed vector
    cout << "Reversed vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Optional: Reverse a part of the vector (e.g., first 3 elements)
    reverse(v.begin(), v.begin() + 3);

    // Show partially reversed vector
    cout << "First 3 elements reversed: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    explainReverse();
    return 0;
}
