#include <iostream>
#include <string>
using namespace std;

void findDuplicates(const string &input)
{
    int H[26] = {0};
    for (char ch : input)
    {
        if (ch >= 'a' && ch <= 'z')
            H[ch - 'a']++;
    }

    bool found = false;
    for (int i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << char(i + 'a') << " " << H[i] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No duplicates found." << endl;
    }
}

int main()
{
    string test = "finding";
    cout << "Duplicates in 'finding':" << endl;
    findDuplicates(test);

    string userInput;
    cout << "\nEnter a lowercase string: ";
    getline(cin, userInput);

    cout << "Duplicates in your input:" << endl;
    findDuplicates(userInput);

    return 0;
}
