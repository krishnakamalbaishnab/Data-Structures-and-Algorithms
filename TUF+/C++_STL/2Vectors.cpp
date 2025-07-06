#include <bits/stdc++.h>
using namespace std;

void Explain_vector()
{
    vector<int> vector1;
    vector1.push_back(2);
    vector1.push_back(4);
    vector1.push_back(5);
    // loop through all the elements of the vector and print it in console
    for (int value : vector1)
    {
        cout << value << " " << endl;
    }
}

int main()
{
    Explain_vector();
    return 0;
}
