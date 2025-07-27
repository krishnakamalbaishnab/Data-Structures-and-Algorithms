#include <bits/stdc++.h>
using namespace std;

int oddNum(int arr[], int n)
{
    int countOddNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            countOddNum++;
        }
    }
    return countOddNum;
}

int main()
{

    int array[5] = {81, 7, 3, 9, 1};
    int size = sizeof(array) / sizeof(int);
    int result = oddNum(array, size);
    cout << result;

    return 0;
}