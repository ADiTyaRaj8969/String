#include <bits/stdc++.h>
using namespace std;

/*
Task 29: Find the longest repeating substring.
Simple approach: binary search + hash (Rabin-Karp) for O(n log n).
Prints one repeating substring or empty if none.
*/

using ull = unsigned long long;

string longestRepeating(const string& s)
{
    int n = s.size();
    if (n < 2)
        return "";
    const ull base = 1315423911ULL;  // use 64-bit rolling hash
    int lo = 1, hi = n - 1;
    string ans = "";
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        unordered_map<ull, vector<int>> seen;
        ull h = 0, p = 1;
        for (int i = 0; i < mid; ++i)
        {
            h = h * 131 + (unsigned char)s[i];
            if (i)
                p *= 131;
        }
        seen[h].push_back(0);
        bool found = false;
        int pos = 0;
        for (int i = mid; i < n; ++i)
        {
            h = h * 131 + (unsigned char)s[i] - p * (unsigned char)s[i - mid];
            if (seen.count(h))
            {
                for (int start : seen[h])
                    if (s.compare(start, mid, s, i - mid + 1, mid) == 0)
                    {
                        found = true;
                        pos = start;
                        break;
                    }
                if (found)
                    break;
            }
            seen[h].push_back(i - mid + 1);
        }
        if (found)
        {
            ans = s.substr(pos, mid);
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return ans;
}

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    cout << longestRepeating(s) << '\n';
}

// Time Complexity: O(n log n) expected
// Space Complexity: O(n)
