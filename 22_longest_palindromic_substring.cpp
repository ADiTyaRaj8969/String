#include <bits/stdc++.h>
using namespace std;

/*
Task 22: Find the longest palindromic substring.
Prints the substring.
Simple O(n^2) expand-around-center approach used.
*/

string longestPalindrome(const string& s)
{
    int n = s.size();
    if (n == 0)
        return "";
    int bestL = 0, bestR = 0;
    for (int i = 0; i < n; ++i)
    {
        // odd
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            if (r - l > bestR - bestL)
            {
                bestL = l;
                bestR = r;
            }
            --l;
            ++r;
        }
        // even
        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r])
        {
            if (r - l > bestR - bestL)
            {
                bestL = l;
                bestR = r;
            }
            --l;
            ++r;
        }
    }
    return s.substr(bestL, bestR - bestL + 1);
}

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    cout << longestPalindrome(s) << '\n';
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
