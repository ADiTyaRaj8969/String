#include <bits/stdc++.h>
using namespace std;

/*
Task 34: Implement the Z algorithm for pattern searching.
Reads two lines: text and pattern; prints starting indices separated by spaces.
*/

vector<int> z_function(const string& s)
{
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

int main()
{
    string t, p;
    if (!getline(cin, t))
        return 0;
    if (!getline(cin, p))
        return 0;
    string s = p + '$' + t;
    auto z = z_function(s);
    int m = p.size();
    vector<int> res;
    for (int i = m + 1; i < s.size(); ++i)
        if (z[i] == m)
            res.push_back(i - 2 * m);
    for (size_t i = 0; i < res.size(); ++i)
    {
        if (i)
            cout << ' ';
        cout << res[i];
    }
    cout << '\n';
}

// Time Complexity: O(n+m)
// Space Complexity: O(n+m)
