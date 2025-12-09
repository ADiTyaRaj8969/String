#include <bits/stdc++.h>
using namespace std;

/*
Task 3: Check if a string is a palindrome.
Reads a line and prints "YES" if palindrome, otherwise "NO".
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    int i = 0, j = (int)s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            cout << "NO\n";
            return 0;
        }
        ++i;
        --j;
    }
    cout << "YES\n";
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
