#include <bits/stdc++.h>
using namespace std;

void pairs()
{
    // Declaring a pair and printing it
    pair<int, int> pair1 = {2, 4};
    cout << pair1.first << "," << pair1.second << endl;

    // we can also use make_pair function to decalre a pair

    pair<int, int> pair2 = make_pair(2, 5);
    cout << pair2.first << "," << pair2.second << endl;

    // nested pair - we can decalre pair inside pairs
    pair<pair<int, int>, int> pair3 = {{4, 5}, 9};
    cout << pair3.first.second << "," << pair3.second << endl;

    // we can use different data types inside any pair

    pair<int, char> pair4 = {4, 'k'};
    cout << pair4.first << "," << pair4.second;
}

int main()
{
    pairs();
    return 0;
}