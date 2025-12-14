#include <bits/stdc++.h>
using namespace std;

/*
Task 12: Remove duplicate characters from a string (keep first occurrences).
Reads a line and prints string with duplicates removed.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    vector<bool> seen(256, false);
    for (char c : s)
    {
        if (!seen[(unsigned char)c])
        {
            cout << c;
            seen[(unsigned char)c] = true;
        }
    }
    cout << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
