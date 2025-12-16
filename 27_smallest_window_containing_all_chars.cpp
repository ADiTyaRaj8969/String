#include <bits/stdc++.h>
using namespace std;

/*
Task 27: Find the smallest window in a string containing all characters of another string.
Reads two lines: text and pattern; prints the smallest window or empty line if none.
*/

string minWindow(string s, string t)
{
    if (t.empty())
        return "";
    vector<int> need(256, 0);
    for (char c : t) ++need[(unsigned char)c];
    int required = t.size();
    int l = 0, bestL = 0, bestLen = INT_MAX;
    for (int r = 0; r < s.size(); ++r)
    {
        if (need[(unsigned char)s[r]] > 0)
            --required;
        --need[(unsigned char)s[r]];
        while (required == 0)
        {
            if (r - l + 1 < bestLen)
            {
                bestLen = r - l + 1;
                bestL = l;
            }
            ++need[(unsigned char)s[l]];
            if (need[(unsigned char)s[l]] > 0)
                ++required;
            ++l;
        }
    }
    return bestLen == INT_MAX ? string("") : s.substr(bestL, bestLen);
}

int main()
{
    string s, t;
    if (!getline(cin, s))
        return 0;
    if (!getline(cin, t))
        return 0;
    cout << minWindow(s, t) << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
