#include <bits/stdc++.h>
using namespace std;

/*
Task 28: Count all palindromic substrings in a string.
Uses expand-around-center O(n^2).
*/

int countPalindromes(const string& s)
{
    int n = s.size(), ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            ++ans;
            --l;
            ++r;
        }
        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            ++ans;
            --l;
            ++r;
        }
    }
    return ans;
}

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    cout << countPalindromes(s) << '\n';
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
