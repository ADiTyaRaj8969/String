#include <bits/stdc++.h>
using namespace std;

/*
Task 26: Find the length of the longest substring without repeating characters.
Uses sliding window.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    vector<int> last(256, -1);
    int start = 0, best = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;
        last[(unsigned char)s[i]] = i;
        best = max(best, i - start + 1);
    }
    cout << best << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
