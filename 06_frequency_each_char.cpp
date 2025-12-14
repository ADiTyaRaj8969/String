#include <bits/stdc++.h>
using namespace std;

/*
Task 6: Find the frequency of each character in a string.
Prints each character and its count in order of first occurrence.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    unordered_map<char, int> cnt;
    vector<char> order;
    for (char c : s)
    {
        if (cnt[c]++ == 0)
            order.push_back(c);
    }
    for (char c : order) cout << c << ": " << cnt[c] << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(k) where k is number of distinct chars
