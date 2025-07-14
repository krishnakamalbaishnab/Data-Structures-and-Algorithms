// queue works with FIFO. - ec the line to book a ticket in a movie ticket counter

#include <bits/stdc++.h>
using namespace std;

void explainQueue()
{
    queue<int> queue1;
    queue1.push(23);
    queue1.push(25);
    queue1.push(26);
    queue1.push(24);

    while (queue1.empty() == false)
    {
        cout << queue1.front() << " " << endl;
        queue1.pop();
    }
}

int main()
{
    explainQueue();
    return 0;
}