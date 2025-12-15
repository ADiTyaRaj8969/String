#include <bits/stdc++.h>
using namespace std;

/*
Task 19: Find the most frequent character in a string.
Reads a line and prints the character (first by max count then by first occurrence).
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    vector<int> cnt(256, 0);
    for (char c : s) ++cnt[(unsigned char)c];
    int best = 0;
    char ch = s.empty() ? '\0' : s[0];
    for (int i = 0; i < 256; ++i)
        if (cnt[i] > best)
            best = cnt[i];
    for (char c : s)
        if (cnt[(unsigned char)c] == best)
        {
            cout << c << '\n';
            return 0;
        }
    cout << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
