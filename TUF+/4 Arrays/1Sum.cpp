#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr1[5] = {4, 6, 7, 2, 7};

    int size = sizeof(arr1) / sizeof(int);

    int result = sum(arr1, size);
    cout << result;

    return 0;
}