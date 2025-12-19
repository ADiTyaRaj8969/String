#include <bits/stdc++.h>
using namespace std;

/*
Task 50: Palindrome partitioning (minimum cuts).
Reads a line and prints minimum cuts needed to partition string into palindromes.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    int n = s.size();
    vector<vector<bool>> isPal(n, vector<bool>(n, false));
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = i; j < n; ++j)
        {
            if (s[i] == s[j] && (j - i < 2 || isPal[i + 1][j - 1]))
                isPal[i][j] = true;
        }
    }
    vector<int> dp(n + 1, INT_MAX / 2);
    dp[0] = -1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < i; ++j)
            if (isPal[j][i - 1])
                dp[i] = min(dp[i], dp[j] + 1);
    }
    cout << dp[n] << "\n";
}

// Time Complexity: O(n^2)
// Space Complexity: O(n^2)
