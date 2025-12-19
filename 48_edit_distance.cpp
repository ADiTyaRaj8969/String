#include <bits/stdc++.h>
using namespace std;

/*
Task 48: Edit distance (Levenshtein).
Reads two lines and prints the edit distance (min operations).
*/

int main()
{
    string a, b;
    if (!getline(cin, a))
        return 0;
    if (!getline(cin, b))
        return 0;
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 0; i <= n; ++i) dp[i][0] = i;
    for (int j = 0; j <= m; ++j) dp[0][j] = j;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
        }
    cout << dp[n][m] << "\n";
}

// Time Complexity: O(n*m)
// Space Complexity: O(n*m)
