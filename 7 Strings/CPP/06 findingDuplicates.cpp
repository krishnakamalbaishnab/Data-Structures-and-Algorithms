// TODO: Finding duplicates in a string using hashtables

#include <iostream>  // Include input-output stream library for cout and endl
using namespace std; // Avoid prefixing std:: before every standard function

int main()
{
    // Declare and initialize a character array (string)
    // 'f', 'i', 'n', 'd', 'i', 'n', 'g' is the input string
    // '\0' is the null terminator to mark the end of the string
    char a[] = {'f', 'i', 'n', 'd', 'i', 'n', 'g', '\0'};

    // Declare a hash table (array) of size 26 for all lowercase English letters
    // Initialize all values to 0
    int H[26] = {0};

    // Loop through each character in the string until null character is found
    for (int i = 0; a[i] != '\0'; i++)
    {
        // Convert the character to an index (0 for 'a', 1 for 'b', ..., 25 for 'z')
        // Increment the count for that character in the hash table
        H[a[i] - 97] += 1;
    }

    // Loop through the hash table
    for (int i = 0; i < 26; i++)
    {
        // If a character occurred more than once (i.e., duplicate)
        if (H[i] > 1)
        {
            // Convert the index back to the character using ASCII and print it
            // Also print how many times it occurred
            cout << char(i + 97) << " " << H[i] << endl;
        }
    }

    return 0; // Indicate successful program execution
}
