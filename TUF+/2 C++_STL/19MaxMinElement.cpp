#include <bits/stdc++.h>
using namespace std;

void explainMaxMinElement()
{
    vector<int> v = {10, 20, 5, 25, 15};

    // Find the maximum element
    auto maxIt = max_element(v.begin(), v.end());

    // Find the minimum element
    auto minIt = min_element(v.begin(), v.end());

    // Output the results
    cout << "Maximum element: " << *maxIt << endl;
    cout << "Minimum element: " << *minIt << endl;

    // Optional: show the index positions
    cout << "Index of max element: " << maxIt - v.begin() << endl;
    cout << "Index of min element: " << minIt - v.begin() << endl;
}

int main()
{
    explainMaxMinElement();
    return 0;
}
