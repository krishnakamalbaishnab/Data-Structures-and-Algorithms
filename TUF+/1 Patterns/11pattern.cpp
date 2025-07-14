
// 0
// 1 0
// 0 1 0

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (i + j) % 2 << " ";
        }
        cout << endl;
    }

    return 0;
}
