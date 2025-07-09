// prirority queue stores data in terms of highest prirority

#include <bits/stdc++.h>
using namespace std;

void priorityQueue()
{
    priority_queue<int> pq1;

    pq1.push(10);
    pq1.push(15);
    pq1.push(18);
    pq1.push(1);
    pq1.push(4);

    cout << pq1.top() << endl; // output 18

    while (pq1.empty() == false)
    {
        cout << pq1.top() << endl;
        pq1.pop();
    }
}

int main()
{
    priorityQueue();
    return 0;
}

// output : 18 15 10 4 1