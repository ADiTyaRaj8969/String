#include <bits/stdc++.h>
using namespace std;

/*
Task 1: Find the length of a string without using built-in functions.
Reads a line from stdin and outputs its length.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    int len = 0;
    for (char c : s) ++len;  // manual counting
    cout << len << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
