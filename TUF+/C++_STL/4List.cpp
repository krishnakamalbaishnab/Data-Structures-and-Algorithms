// lost is same as the vector but has an extra features called push_front - using which we can insert elements into front

#include <bits/stdc++.h>
using namespace std;

void explianList()
{
    list<int> list1 = {2, 4};
    list1.push_front(5);
    for (int value : list1)
    {
        cout << value << endl;
    }
}

int main()
{
    explianList();

    return 0;
}