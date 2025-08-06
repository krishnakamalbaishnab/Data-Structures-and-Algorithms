#include <bits/stdc++.h>
using namespace std;

bool sortedOrNot(int arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        // If any current element is greater than the next one, it's not sorted
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int array[5] = {81, 7, 3, 9, 1};
    int size = sizeof(array) / sizeof(int);

    bool sorted = sortedOrNot(array, size);

    if (sorted)
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
