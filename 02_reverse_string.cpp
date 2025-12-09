#include <bits/stdc++.h>
using namespace std;

/*
Task 2: Reverse a string.
Reads a line and prints its reverse.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    for (int i = (int)s.size() - 1; i >= 0; --i) cout << s[i];
    cout << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
