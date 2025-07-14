#include <bits/stdc++.h>
using namespace std;

// Define reverse function outside main
int reverse(int x)
{
    int sign = (x < 0) ? -1 : 1;
    long long num = abs((long long)x); // avoid overflow on abs(INT_MIN)
    long long reverseNum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        reverseNum = (reverseNum * 10) + lastDigit;

        // Check overflow after each step
        if (reverseNum > INT_MAX)
        {
            return 0; // overflow case for LeetCode
        }

        num /= 10;
    }

    reverseNum *= sign;

    if (reverseNum < INT_MIN || reverseNum > INT_MAX)
    {
        return 0; // overflow check after restoring sign
    }

    return (int)reverseNum;
}

int main()
{
    int x;
    cout << "Enter number to reverse: ";
    cin >> x;

    int result = reverse(x);
    cout << "Reversed number: " << result << "\n";

    return 0;
}
