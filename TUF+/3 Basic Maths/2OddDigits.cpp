#include <bits/stdc++.h>
using namespace std;

int countOddDigitNumber(int number)
{
    int count = 0;
    if (number == 0)
    {
        return 0;
    }
    else
    {

        while (number > 0)
        {

            int digit = number % 10;
            if (digit % 2 != 0)
            {
                count += 1;
            }
            number = number / 10;
        }
        return count;
    }
}

int main()
{
    int number;
    cin >> number;
    int result = countOddDigitNumber(number);
    cout << result << endl;

    return 0;
}