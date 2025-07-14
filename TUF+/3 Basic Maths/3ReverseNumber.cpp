#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int number)
{
    int reverseNum = 0;
    if (number == 0)
    {
        return 0;
    }
    else
    {
        while (number > 0)
        {
            int lastDigit = number % 10;
            reverseNum = (reverseNum * 10) + lastDigit;
            number = number / 10;
        }
    }
    return reverseNum;
}

int main()
{
    int number;
    cin >> number;
    int result = reverseNumber(number);
    cout << result << endl;

    return 0;
}