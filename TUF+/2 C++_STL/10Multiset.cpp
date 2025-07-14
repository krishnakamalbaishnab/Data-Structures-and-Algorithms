// multiset stores same elements multiple times

// multiset stores **duplicate elements** in **sorted order**
#include <bits/stdc++.h>
using namespace std;

void explainMultiSet()
{
    multiset<int> ms1;

    // ✅ 1. Insert elements (duplicates are allowed)
    ms1.insert(5);
    ms1.insert(5);
    ms1.insert(5);
    ms1.insert(6);
    ms1.insert(7);
    ms1.insert(9);

    cout << "Contents of multiset after insertion:\n";
    for (auto it : ms1)
    {
        cout << it << " ";
    }
    cout << "\n\n";

    // ✅ 2. Count occurrences of an element
    cout << "Count of 5: " << ms1.count(5) << "\n";   // Output: 3
    cout << "Count of 6: " << ms1.count(6) << "\n\n"; // Output: 1

    // ✅ 3. Find an element (returns iterator to one of the occurrences)
    auto it = ms1.find(5);
    if (it != ms1.end())
        cout << "Element 5 found at address: " << &(*it) << "\n\n";

    // ✅ 4. Erase one occurrence of an element
    // This will erase just ONE 5 (not all of them)
    ms1.erase(ms1.find(5));
    cout << "After erasing one occurrence of 5:\n";
    for (auto val : ms1)
    {
        cout << val << " ";
    }
    cout << "\n\n";

    // ✅ 5. Erase all occurrences of an element
    ms1.erase(5); // Erases all 5s now
    cout << "After erasing all occurrences of 5:\n";
    for (auto val : ms1)
    {
        cout << val << " ";
    }
    cout << "\n\n";

    // ✅ 6. Lower Bound (first element >= given value)
    auto lb = ms1.lower_bound(6);
    if (lb != ms1.end())
        cout << "Lower bound of 6: " << *lb << "\n";

    // ✅ 7. Upper Bound (first element > given value)
    auto ub = ms1.upper_bound(6);
    if (ub != ms1.end())
        cout << "Upper bound of 6: " << *ub << "\n\n";

    // ✅ 8. Equal Range (returns pair of iterators: lower_bound and upper_bound)
    auto range = ms1.equal_range(7);
    cout << "Equal range of 7:\n";
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << *it << " ";
    }
    cout << "\n\n";

    // ✅ 9. Size of multiset
    cout << "Size of multiset: " << ms1.size() << "\n";

    // ✅ 10. Check if multiset is empty
    cout << "Is multiset empty? " << (ms1.empty() ? "Yes" : "No") << "\n\n";

    // ✅ 11. Clear the multiset
    ms1.clear();
    cout << "After clearing, is multiset empty? " << (ms1.empty() ? "Yes" : "No") << "\n";
}

int main()
{
    explainMultiSet();
    return 0;
}
