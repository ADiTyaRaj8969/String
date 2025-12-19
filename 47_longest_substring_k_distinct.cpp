#include <bits/stdc++.h>
using namespace std;

/*
Task 47: Longest substring with at most K distinct characters.
Reads a line (string) and integer K on next line; prints length of longest substring.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    int K;
    if (!(cin >> K))
        return 0;
    unordered_map<char, int> cnt;
    int l = 0, best = 0;
    for (int r = 0; r < s.size(); ++r)
    {
        cnt[s[r]]++;
        while (cnt.size() > K)
        {
            if (--cnt[s[l]] == 0)
                cnt.erase(s[l]);
            ++l;
        }
        best = max(best, r - l + 1);
    }
    cout << best << "\n";
}

// Time Complexity: O(n)
// Space Complexity: O(k)
