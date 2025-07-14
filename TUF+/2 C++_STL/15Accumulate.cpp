#include <bits/stdc++.h>
using namespace std;

void explainAccumulate()
{
    int arr[5] = {4, 5, 6, 7, 82};
    cout << accumulate(arr + 2, arr + 5, 0); // Sum from arr[2] to arr[4]
}

int main()
{
    explainAccumulate();
    return 0;
}
