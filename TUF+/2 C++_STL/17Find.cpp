#include <bits/stdc++.h>
using namespace std;

void explainFind()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // Search for 30 in the vector
    auto it = find(v.begin(), v.end(), 30);

    if (it != v.end())
    {
        // Element found
        cout << "Found at index: " << it - v.begin() << endl;
    }
    else
    {
        // Element not found
        cout << "Element not found!" << endl;
    }
}

int main()
{
    explainFind();
    return 0;
}
