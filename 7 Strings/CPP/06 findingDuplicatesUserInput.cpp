#include <iostream>
#include <string>
using namespace std;

// Reusable function to find duplicates
void findDuplicates(const string &input)
{
    int H[26] = {0}; // hash table for lowercase letters

    for (char ch : input)
    {
        if (ch >= 'a' && ch <= 'z') // check only lowercase
            H[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << char(i + 'a') << " " << H[i] << endl;
        }
    }
}

int main()
{
    // Test with hardcoded string
    string test = "finding";
    cout << "Duplicates in 'finding':" << endl;
    findDuplicates(test);

    // Get input from user
    string userInput;
    cout << "\nEnter a lowercase string: ";
    cin >> userInput;

    cout << "Duplicates in your input:" << endl;
    findDuplicates(userInput);

    return 0;
}
