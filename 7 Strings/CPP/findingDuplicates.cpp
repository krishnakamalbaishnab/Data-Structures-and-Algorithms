// TODO: Finding duplicates in string using hash tables

#include <iostream>

using namespace std;

int main()
{

    char a[] = {'f', 'i', 'n', 'd', 'i', 'n', 'g', '\0'};

    int H[26] = {0};

    for (int i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << char(i + 97) << " " << H[i] << endl;
        }
    }
    return 0;
}