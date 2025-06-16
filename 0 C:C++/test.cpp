#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // Number of elements

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int sum = accumulate(nums.begin(), nums.end(), 0);
    cout << "Sum = " << sum << endl;

    return 0;
}
