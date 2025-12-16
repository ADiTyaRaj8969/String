#include <bits/stdc++.h>
using namespace std;

/*
Task 33: Implement the Rabin–Karp string matching algorithm.
Reads two lines: text and pattern; prints starting indices separated by spaces.
*/

int main()
{
    string t, p;
    if (!getline(cin, t))
        return 0;
    if (!getline(cin, p))
        return 0;
    int n = t.size(), m = p.size();
    if (m > n)
    {
        cout << '\n';
        return 0;
    }
    const unsigned long long base = 1315423911ULL;
    unsigned long long hashP = 0, hashT = 0, powB = 1;
    for (int i = 0; i < m; ++i)
    {
        hashP = hashP * 131 + (unsigned char)p[i];
        hashT = hashT * 131 + (unsigned char)t[i];
        if (i)
            powB *= 131;
    }
    vector<int> res;
    if (hashP == hashT && t.substr(0, m) == p)
        res.push_back(0);
    for (int i = m; i < n; ++i)
    {
        hashT = hashT * 131 + (unsigned char)t[i] - powB * (unsigned char)t[i - m];
        if (hashT == hashP && t.substr(i - m + 1, m) == p)
            res.push_back(i - m + 1);
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

// Time Complexity: O(n)
// Space Complexity: O(1)
