#include <bits/stdc++.h>
using namespace std;

/*
Task 7: Remove all spaces from a string.
Reads a line and prints it without spaces.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    for (char c : s)
        if (c != ' ')
            cout << c;
    cout << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
