#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Ascending part
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Spaces
        for (int s = 1; s <= 2 * (n - i); s++)
        {
            cout << " ";
        }

        // Descending part
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
