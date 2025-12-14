#include <bits/stdc++.h>
using namespace std;

/*
Task 11: Replace all spaces in a string with %20.
Reads a line and prints the modified string.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    for (char c : s)
    {
        if (c == ' ')
            cout << "%20";
        else
            cout << c;
    }
    cout << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
