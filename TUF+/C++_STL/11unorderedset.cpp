// unordered_set stores **unique elements** in **no particular order**
// Internally uses a hash table -> Average Time Complexity: O(1) for insert/find/erase
#include <bits/stdc++.h>
using namespace std;

void explainUnorderedSet()
{
    unordered_set<int> uset;

    // ✅ 1. Insert elements (duplicates are automatically ignored)
    uset.insert(10);
    uset.insert(10); // ignoreds
    uset.insert(16);
    uset.insert(14);
    uset.insert(109);
    uset.insert(12);

    cout << "Contents of unordered_set after insertion:\n";
    for (auto it : uset)
    {
        cout << it << " ";
    }
    cout << "\n\n";

    // ✅ 2. Check if an element exists using find
    int val = 16;
    auto it = uset.find(val);
    if (it != uset.end())
        cout << "Element " << val << " found in set.\n";
    else
        cout << "Element " << val << " not found in set.\n";

    // ✅ 3. Count (returns 0 or 1 since all elements are unique)
    cout << "Count of 10: " << uset.count(10) << "\n";
    cout << "Count of 99: " << uset.count(99) << "\n\n";

    // ✅ 4. Erase an element (by value)
    uset.erase(10);
    cout << "After erasing 10:\n";
    for (auto val : uset)
    {
        cout << val << " ";
    }
    cout << "\n\n";

    // ✅ 5. Size of the unordered_set
    cout << "Size of unordered_set: " << uset.size() << "\n";

    // ✅ 6. Check if the unordered_set is empty
    cout << "Is unordered_set empty? " << (uset.empty() ? "Yes" : "No") << "\n\n";

    // ✅ 7. Clear the unordered_set
    uset.clear();
    cout << "After clearing, is unordered_set empty? " << (uset.empty() ? "Yes" : "No") << "\n";
}

int main()
{
    explainUnorderedSet();
    return 0;
}

// | Operation | Description | Time Complexity(Avg) |
//     | -- -- -- -- -- -| -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --| -- -- -- -- -- -- -- -- -- -- -|
//     | `insert(x)` | Adds unique element | O(1) |
//     | `find(x)` | Returns iterator to x, or `end()` | O(1) |
//     | `count(x)` | Returns 0 or 1(no duplicates allowed) | O(1) |
//     | `erase(x)` | Removes the element `x` | O(1) |
//     | `size()` | Number of elements | O(1) |
//     | `empty()` | Checks if set is empty | O(1) |
//     | `clear()` | Removes all elements | O(n) |
