#include <bits/stdc++.h>
using namespace std;

/*
Task 32: Implement the KMP algorithm.
Reads two lines: text and pattern; prints all starting indices separated by spaces.
*/

vector<int> prefix_function(const string& s)
{
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; ++i)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j])
            ++j;
        pi[i] = j;
    }
    return pi;
}

int main()
{
    string t, p;
    if (!getline(cin, t))
        return 0;
    if (!getline(cin, p))
        return 0;
    string s = p + '#' + t;
    auto pi = prefix_function(s);
    int m = p.size();
    vector<int> res;
    for (int i = m + 1; i < s.size(); ++i)
        if (pi[i] == m)
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
