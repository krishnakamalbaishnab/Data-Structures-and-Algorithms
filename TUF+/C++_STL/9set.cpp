// set stores only unique elements

#include <bits/stdc++.h>
using namespace std;

void setExplain()
{
    set<int> set1;
    set1.insert(4);
    set1.insert(4);
    set1.insert(5);
    set1.insert(7);
    set1.insert(9);

    for (auto it : set1)
    {
        cout << it << endl;
    }
}

int main()
{
    setExplain();
    return 0;
}