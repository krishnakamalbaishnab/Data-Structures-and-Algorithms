// set stores only unique elements
// In an std::set, elements are sorted and not indexed, so there's no direct concept of a "position" or "index" like in a vector.

// operations of set
// push - emplace
// find
// erase
// count
// lower_bound
// upper_bound

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

    // find elements using iterator

    auto it = set1.find(5);
    if (it != set1.end())
    {
        cout << *it << endl;
    }
}

int main()
{
    setExplain();
    return 0;
}