#include <bits/stdc++.h>
using namespace std;

int countDigit(int number)
{
    if (number == 0)
    {
        return 1;
    }
    else
    {
        int count = 0;
        while (number > 0)
        {
            number = number / 10;
            count += 1;
        }
        return count;
    }
}

int main()
{
    int number;
    cin >> number;

    int result = countDigit(number);
    cout << result << endl;

    return 0;
}