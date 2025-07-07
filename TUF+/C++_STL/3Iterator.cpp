// iterator

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}

// for each

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}