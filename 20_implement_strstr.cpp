#include <bits/stdc++.h>
using namespace std;

/*
Task 20: Implement your own version of strstr() (substring search).
Reads two lines: text and pattern, prints index of first occurrence or -1.
*/

int strstr_impl(const string& text, const string& pat)
{
    if (pat.empty())
        return 0;
    int n = text.size(), m = pat.size();
    for (int i = 0; i + m <= n; ++i)
    {
        int j = 0;
        while (j < m && text[i + j] == pat[j]) ++j;
        if (j == m)
            return i;
    }
    return -1;
}

int main()
{
    string t, p;
    if (!getline(cin, t))
        return 0;
    if (!getline(cin, p))
        return 0;
    cout << strstr_impl(t, p) << '\n';
    return 0;
}

// Time Complexity: O(n*m) naive, can be improved to O(n+m) with KMP
// Space Complexity: O(1)
