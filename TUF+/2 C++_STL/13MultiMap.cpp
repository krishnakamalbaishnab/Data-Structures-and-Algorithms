#include <bits/stdc++.h>
using namespace std;

// multimap allows duplicate keys and stores key-value pairs in sorted order (by key)
// underlying data structure: Red-Black Tree (same as map)

void explainMultiMap()
{
    multimap<int, string> mmap;

    // ✅ 1. Insert key-value pairs (duplicate keys allowed)
    mmap.insert({1, "apple"});
    mmap.insert({2, "banana"});
    mmap.insert({2, "blueberry"});
    mmap.insert({3, "cherry"});
    mmap.insert({4, "date"});
    mmap.insert({4, "dragonfruit"});
    mmap.insert({4, "dewberry"});

    // ✅ 2. Print all elements (sorted by key, duplicates allowed)
    cout << "Multimap contents:\n";
    for (auto it : mmap)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << "\n";

    // ✅ 3. Count how many values exist for a key
    cout << "Number of values for key 4: " << mmap.count(4) << "\n";

    // ✅ 4. Find one occurrence of a key
    auto it = mmap.find(2); // returns iterator to first (not all)
    if (it != mmap.end())
        cout << "First value with key 2: " << it->second << "\n";

    // ✅ 5. Get all values for a key using equal_range()
    auto range = mmap.equal_range(4);
    cout << "\nAll values with key 4:\n";
    for (auto itr = range.first; itr != range.second; ++itr)
    {
        cout << itr->first << " => " << itr->second << endl;
    }

    // ✅ 6. Erase a specific key-value pair (one at a time)
    auto eraseIt = mmap.find(2);
    if (eraseIt != mmap.end())
    {
        mmap.erase(eraseIt); // Erases just one occurrence of key 2
    }

    // ✅ 7. Erase all values of a specific key
    mmap.erase(4); // removes all entries with key 4

    // ✅ 8. Size and empty check
    cout << "\nSize after erasing: " << mmap.size() << endl;
    cout << "Is multimap empty? " << (mmap.empty() ? "Yes" : "No") << "\n";

    // ✅ 9. Clear the multimap
    mmap.clear();
    cout << "After clearing, is multimap empty? " << (mmap.empty() ? "Yes" : "No") << "\n";
}

int main()
{
    explainMultiMap();
    return 0;
}
