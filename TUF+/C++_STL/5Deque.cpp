// A deque is a sequence container with the ability to expand and contract on both ends efficiently. It supports fast insertions and deletions at both the beginning and the end, making it more flexible than a vector or list in scenarios where elements are frequently added or removed from both ends.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30};
    dq.push_front(0); // Insert at the beginning
    dq.push_back(40); // Insert at the end
    for (int i : dq)
    {
        cout << i << " ";
    }
    return 0;
}