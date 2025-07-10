#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
    map<int, string> map1;
    map1[1] = "abc";
    map1[2] = "dj";
    map1[3] = "raj";
    map1[4] = "kkb";

    // another method of storing elements or inserting elements in map

    map1.insert({5, "Rocky"});

    for (auto it : map1)
    {
        cout << it.first << " -> " << it.second << endl;
    }
}

// one important concepts : if we enter some imformation to the 4th key value the older ones gets replaced with new ones

int main()
{

    explainMap();

    return 0;
}