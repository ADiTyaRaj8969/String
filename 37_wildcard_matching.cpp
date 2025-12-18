#include <bits/stdc++.h>
using namespace std;

/*
Task 37: Implement wildcard pattern matching (? and *).
Reads two lines: text and pattern; prints YES/NO.
? matches single char, * matches any sequence (including empty).
Using dynamic programming.
*/

int main()
{
    string s, p;
    if (!getline(cin, s))
        return 0;
    if (!getline(cin, p))
        return 0;
    int n = s.size(), m = p.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
    dp[0][0] = true;
    for (int j = 1; j <= m && p[j - 1] == '*'; ++j) dp[0][j] = true;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (p[j - 1] == '*')
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
            else if (p[j - 1] == '?' || p[j - 1] == s[i - 1])
                dp[i][j] = dp[i - 1][j - 1];
        }
    }
    cout << (dp[n][m] ? "YES" : "NO") << '\n';
}

// Time Complexity: O(n*m)
// Space Complexity: O(n*m)
