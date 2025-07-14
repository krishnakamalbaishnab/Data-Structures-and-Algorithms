#include <bits/stdc++.h>
using namespace std;

// map stores unique keys in sorted order
// underlying data structure: Red-Black Tree (Self-balancing BST)

void explainMap()
{
    map<int, string> map1;

    // ✅ 1. Insert using operator[] (also used for update)
    map1[1] = "abc";
    map1[2] = "dj";
    map1[3] = "raj";
    map1[4] = "kkb"; // Later we'll update this key

    // ✅ 2. Insert using insert() function
    map1.insert({5, "Rocky"});
    map1.insert(make_pair(6, "Aryan"));

    // ✅ 3. Update a value (existing key gets overwritten)
    map1[4] = "Krishna"; // Overwrites "kkb"

    // ✅ 4. Print all key-value pairs (sorted by key)
    cout << "Map contents:\n";
    for (auto it : map1)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << "\n";

    // ✅ 5. Find if a key exists using find()
    auto it = map1.find(3);
    if (it != map1.end())
        cout << "Key 3 found with value: " << it->second << "\n";
    else
        cout << "Key 3 not found\n";

    // ✅ 6. Count if a key exists (returns 0 or 1 for map)
    cout << "Does key 10 exist? " << (map1.count(10) ? "Yes" : "No") << "\n";

    // ✅ 7. Erase a key
    map1.erase(2); // Deletes key 2 and its value

    // ✅ 8. Size of the map
    cout << "Size of map: " << map1.size() << "\n";

    // ✅ 9. Check if map is empty
    cout << "Is map empty? " << (map1.empty() ? "Yes" : "No") << "\n";

    // ✅ 10. Iterate using traditional iterator
    cout << "\nMap contents using iterator:\n";
    for (map<int, string>::iterator itr = map1.begin(); itr != map1.end(); ++itr)
    {
        cout << itr->first << " => " << itr->second << endl;
    }

    // ✅ 11. Clear the map
    map1.clear();
    cout << "\nMap cleared. Is map empty now? " << (map1.empty() ? "Yes" : "No") << "\n";
}

int main()
{
    explainMap();
    return 0;
}

// | Operation            | Description                     | Complexity |
// | -------------------- | ------------------------------- | ---------- |
// | `m[key] = val`       | Insert or update value          | O(log n)   |
// | `insert({key, val})` | Insert only (no overwrite)      | O(log n)   |
// | `find(key)`          | Returns iterator to key         | O(log n)   |
// | `count(key)`         | Returns 1 if key exists, else 0 | O(log n)   |
// | `erase(key)`         | Removes key and value           | O(log n)   |
// | `size()`             | Returns number of elements      | O(1)       |
// | `empty()`            | Checks if map is empty          | O(1)       |
// | `clear()`            | Removes all elements            | O(n)       |
