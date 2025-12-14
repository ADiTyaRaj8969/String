#include <bits/stdc++.h>
using namespace std;

/*
Task 10: Find the first non-repeating character in a string.
Reads a line and prints the character or "_" if none.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    vector<int> freq(256, 0);
    for (char c : s) ++freq[(unsigned char)c];
    for (char c : s)
        if (freq[(unsigned char)c] == 1)
        {
            cout << c << '\n';
            return 0;
        }
    cout << "_\n";
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
