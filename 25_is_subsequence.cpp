#include <bits/stdc++.h>
using namespace std;

/*
Task 25: Check if one string is a subsequence of another.
Reads two lines: s and t, prints YES if s is subsequence of t.
*/

int main()
{
    string s, t;
    if (!getline(cin, s))
        return 0;
    if (!getline(cin, t))
        return 0;
    int i = 0, j = 0;
    while (i < s.size() && j < t.size())
    {
        if (s[i] == t[j])
            ++i;
        ++j;
    }
    cout << (i == s.size() ? "YES" : "NO") << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
