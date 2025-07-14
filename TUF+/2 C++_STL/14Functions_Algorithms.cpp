#include <bits/stdc++.h>
using namespace std;

void explainSort()
{
    int a[5] = {3, 5, 7, 2, 0};
    // sort(a, a + 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << endl;
    // }

    // we can sort from range to range also:

    // sort(a + 2, a + 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << endl;
    // }

    // we can use for vector also

    vector<int> vector1 = {4, 7, 9, 2, 1, 0};
    sort(vector1.begin(), vector1.end());
    for (auto it : vector1)
    {
        cout << it << endl;
    }
}

int main()
{
    explainSort();

    return 0;
}