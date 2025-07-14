#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    return a > b; // Sort in descending order
}

int main()
{
    vector<int> v = {3, 1, 4, 1, 5, 9};
    sort(v.begin(), v.end(), compare);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}