#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {5, 6, 7, 6, 3, 6};
    int hashTable[10] = {0};
    for (int i = 0; i < 6; i++)
    {
        hashTable[arr[i]]++;
    }
    cout << hashTable[6] << endl;
    return 0;
}