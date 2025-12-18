#include <bits/stdc++.h>
using namespace std;

/*
Task 38: Implement regular expression matching (., *).
Reads two lines: text and pattern; prints YES/NO.
Here . matches any single char, * means zero or more of preceding element.
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
    for (int j = 2; j <= m; ++j)
        if (p[j - 1] == '*')
            dp[0][j] = dp[0][j - 2];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (p[j - 1] == '*')
            {
                dp[i][j] =
                    dp[i][j - 2] || ((p[j - 2] == '.' || p[j - 2] == s[i - 1]) && dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = (p[j - 1] == '.' || p[j - 1] == s[i - 1]) && dp[i - 1][j - 1];
            }
        }
    }
    cout << (dp[n][m] ? "YES" : "NO") << '\n';
}

// Time Complexity: O(n*m)
// Space Complexity: O(n*m)
