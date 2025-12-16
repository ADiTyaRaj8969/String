#include <bits/stdc++.h>
using namespace std;

/*
Task 31: Implement the Naive pattern searching algorithm.
Reads two lines: text and pattern; prints all starting indices (0-based) separated by spaces.
*/

int main()
{
    string t, p;
    if (!getline(cin, t))
        return 0;
    if (!getline(cin, p))
        return 0;
    vector<int> res;
    int n = t.size(), m = p.size();
    for (int i = 0; i + m <= n; ++i)
    {
        int j = 0;
        while (j < m && t[i + j] == p[j]) ++j;
        if (j == m)
            res.push_back(i);
    }
    for (size_t i = 0; i < res.size(); ++i)
    {
        if (i)
            cout << ' ';
        cout << res[i];
    }
    cout << '\n';
    return 0;
}

// Time Complexity: O(n*m)
// Space Complexity: O(1)
