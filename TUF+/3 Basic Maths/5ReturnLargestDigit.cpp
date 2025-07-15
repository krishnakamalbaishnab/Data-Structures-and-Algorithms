// return the largest didigit in a given number

#include <bits/stdc++.h>
using namespace std;

int largestDigit(int number)
{
    int largest = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        if (lastDigit > largest)
        {
            largest = lastDigit;
        }
        number = number / 10;
    }
    return largest;
}

int main()
{
    int number;
    cin >> number;

    int result = largestDigit(number);
    cout << result << endl;

    return 0;
}