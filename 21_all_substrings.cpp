#include <bits/stdc++.h>
using namespace std;

/*
Task 21: Generate all substrings of a string.
Prints each substring on its own line.
Warning: O(n^2) substrings.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    int n = s.size();
    for (int i = 0; i < n; ++i)
        for (int len = 1; i + len <= n; ++len) cout << s.substr(i, len) << '\n';
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1) extra
