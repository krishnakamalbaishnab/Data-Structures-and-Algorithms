// *****
//  ***
//   *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * (n - i + 1) - 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
