# 🧠 C++ STL Cheat Sheet

## 1. Pair
```cpp
pair<int, string> p = {1, "Krishna"};
cout << p.first << " " << p.second;
```
- Use: Return multiple values from functions

---

## 2. Vector
```cpp
vector<int> v = {1, 2, 3};
v.push_back(4); v.pop_back();
sort(v.begin(), v.end());
```
- Use: Dynamic arrays

---

## 3. Stack & Queue
```cpp
stack<int> s; s.push(10); s.top(); s.pop();
queue<int> q; q.push(10); q.front(); q.pop();
deque<int> d; d.push_front(1); d.push_back(2);
```
- Use: LIFO/FIFO structures

---

## 4. Map & Set
```cpp
map<int, string> m; m[1] = "One";
set<int> s = {1, 2, 3};
unordered_map<int, int> um; unordered_set<int> us;
multiset<int> ms; // Allows duplicates
```
- Use: Key-value pairs, unique elements

---

## 5. Priority Queue
```cpp
priority_queue<int> pq; // Max-heap
priority_queue<int, vector<int>, greater<int>> min_pq; // Min-heap
```
- Use: Get largest/smallest element efficiently

---

## 6. Iterators
```cpp
vector<int>::iterator it = v.begin();
for (auto it = v.begin(); it != v.end(); ++it) cout << *it;
```
- Use: Traverse containers

---

## 7. Algorithms (from <algorithm>)
```cpp
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
count(v.begin(), v.end(), x);
find(v.begin(), v.end(), x);
binary_search(v.begin(), v.end(), x);
lower_bound(v.begin(), v.end(), x);
upper_bound(v.begin(), v.end(), x);
```
- Use: Efficient container operations

---

## 8. Custom Sort / Lambda
```cpp
sort(v.begin(), v.end(), [](int a, int b){ return a > b; });
```
- Use: Custom comparators

---

## 9. Fast I/O
```cpp
ios::sync_with_stdio(false);
cin.tie(NULL);
```
- Use: Speeds up cin/cout for competitive programming
