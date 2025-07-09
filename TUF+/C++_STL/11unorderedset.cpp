// stores unique elements but in an random order

#include <bits/stdc++.h>
using namespace std;

void explainUnderorderSet()
{

    unordered_set<int> unorderset1;
    unorderset1.insert(10);
    unorderset1.insert(10);
    unorderset1.insert(16);
    unorderset1.insert(16);
    unorderset1.insert(14);
    unorderset1.insert(109);
    unorderset1.insert(12);

    for (auto it : unorderset1)
    {
        cout << it << endl;
    }
}

int main()
{
    explainUnderorderSet();
    return 0;
}