#include <bits/stdc++.h>
using namespace std;

void explainPermutations()
{
    vector<int> v = {1, 2, 3};

    // Show the current permutation
    cout << "Current permutation: ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // Generate the next lexicographical permutation
    if (next_permutation(v.begin(), v.end()))
    {
        cout << "Next permutation: ";
        for (int num : v)
            cout << num << " ";
        cout << endl;
    }
    else
    {
        cout << "Already at the last permutation.\n";
    }

    // Generate the previous lexicographical permutation
    if (prev_permutation(v.begin(), v.end()))
    {
        cout << "Previous permutation: ";
        for (int num : v)
            cout << num << " ";
        cout << endl;
    }
    else
    {
        cout << "Already at the first permutation.\n";
    }
}

int main()
{
    explainPermutations();
    return 0;
}
